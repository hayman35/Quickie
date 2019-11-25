#include <string>
#include "Poco/MD5Engine.h"
#include "Poco/DigestStream.h"
#include <iostream>

#include <Poco/Net/HTTPClientSession.h>
#include <Poco/Net/HTTPRequest.h>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/StreamCopier.h>
#include <Poco/Path.h>
#include <Poco/URI.h>
#include <Poco/Exception.h>

#ifndef QUICKIE_USERHTTPREQUEST_H
#define QUICKIE_USERHTTPREQUEST_H

class UserHttpRequest {
    public:
        std::string sendRequest(std::string uri);
};

#endif //QUICKIE_USERHTTPREQUEST_H