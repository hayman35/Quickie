
#include "Poco/DigestStream.h"
#include <Poco/Net/HTTPClientSession.h>
#include <Poco/Net/HTTPRequest.h>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/StreamCopier.h>
#include <Poco/Path.h>
#include <Poco/URI.h>
#include <Poco/Exception.h>
#include <Poco/JSON/JSON.h>
#include <Poco/JSON/Parser.h>
#include <Poco/Dynamic/Var.h>

#include <iostream>
#include <string>

#ifndef QUICKIE_USERHTTPREQUEST_H
#define QUICKIE_USERHTTPREQUEST_H

class UserHttpRequest {
    public:
        Poco::JSON::Object::Ptr sendRequest(std::string uri);
};

#endif //QUICKIE_USERHTTPREQUEST_H