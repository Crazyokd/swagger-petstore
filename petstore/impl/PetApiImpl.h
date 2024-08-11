/**
* Swagger Petstore
* This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
*
* The version of the OpenAPI document: 1.0.7
* Contact: apiteam@swagger.io
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* PetApiImpl.h
*
* 
*/

#ifndef PET_API_IMPL_H_
#define PET_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <PetApi.h>


#include "ApiResponse.h"
#include "Pet.h"
#include <string>
#include <vector>

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class  PetApiImpl : public org::openapitools::server::api::PetApi {
public:
    explicit PetApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~PetApiImpl() override = default;

    void add_pet(const Pet &pet, Pistache::Http::ResponseWriter &response);
    void delete_pet(const int64_t &petId, const std::optional<Pistache::Http::Header::Raw> &apiKey, Pistache::Http::ResponseWriter &response);
    void find_pets_by_status(const std::optional<std::vector<std::string>> &status, Pistache::Http::ResponseWriter &response);
    void find_pets_by_tags(const std::optional<std::vector<std::string>> &tags, Pistache::Http::ResponseWriter &response);
    void get_pet_by_id(const int64_t &petId, Pistache::Http::ResponseWriter &response);
    void update_pet(const Pet &pet, Pistache::Http::ResponseWriter &response);
    void update_pet_with_form(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter &response);
    void upload_file(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
