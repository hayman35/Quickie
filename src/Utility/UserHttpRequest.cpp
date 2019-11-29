
#include <string>
#include "../Headers/UserHttpRequest.h"

using namespace Poco::JSON;
using namespace Poco::Dynamic;
using namespace Poco::Net;
using namespace Poco;
using namespace std;


Object::Ptr UserHttpRequest::sendRequest(string url){
    try{
        URI uri(url);
        HTTPClientSession session(uri.getHost(), uri.getPort());

        // prepare path
        string path(uri.getPathAndQuery());
        if (path.empty()) {
            path = "/";
        }

        // send request
        HTTPRequest req(HTTPRequest::HTTP_GET, path, HTTPMessage::HTTP_1_1);
        session.sendRequest(req);

        // get response
        HTTPResponse res;
        cout << "Status: " << res.getStatus() << endl;
        cout << "Reason: " << res.getReason() << endl;

        // print response
        std::istream &is = session.receiveResponse(res);
        string json;

        StreamCopier::copyToString(is, json);

//        cout << json << endl;

//      Convert response to JSON object
        Parser parser;
        Var result = parser.parse(json);
        Object::Ptr object = result.extract<Object::Ptr>();
        return object;
    }
    catch (Poco::Exception &ex){
        Parser parser;
        string json = "{}";
        Var result = parser.parse(json);
        Object::Ptr object = result.extract<Object::Ptr>();
        return object;
    }
}