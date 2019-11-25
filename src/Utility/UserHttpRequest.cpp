
#include <string>
#include "../Headers/UserHttpRequest.h"

using namespace Poco::Net;
using namespace Poco;

std::string UserHttpRequest::sendRequest(std::string uri){
    try{
        URI uri("http://cs3307uwo.api.stdlib.com/uberestimate@dev/");
        HTTPClientSession session(uri.getHost(), uri.getPort());

        // prepare path
        std::string path(uri.getPathAndQuery());
        if (path.empty()) {
            path = "/";
        }

        // send request
        HTTPRequest req(HTTPRequest::HTTP_GET, path, HTTPMessage::HTTP_1_1);
        session.sendRequest(req);

        // get response
        HTTPResponse res;
        std::cout << "Status: " << res.getStatus() << std::endl;
        std::cout << "Reason: " << res.getReason() << std::endl;

        // print response
        std::istream &is = session.receiveResponse(res);
        StreamCopier::copyStream(is, std::cout);

    }
    catch (Poco::Exception &ex){
        std::cout << "ERROR" << std::endl;
        return "failed";
    }
    return "Succesful";
}