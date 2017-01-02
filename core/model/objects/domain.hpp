/*
Copyright Soramitsu Co., Ltd. 2016 All Rights Reserved.
http://soramitsu.co.jp

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef CORE_DOMAIN_OBJECTS_DOMAIN_HPP_
#define CORE_DOMAIN_OBJECTS_DOMAIN_HPP_

#include <string>

namespace object {

class Domain{
public:
    std::string ownerPublicKey;
    std::string name;

    explicit Domain(
        std::string&& ownerPublicKey,
        std::string&& name
    ):
        ownerPublicKey(ownerPublicKey),
        name(name)
    {}

    explicit Domain():
        ownerPublicKey(""),
        name("")
    {}
};

};  // namespace domain

#endif  // CORE_DOMAIN_OBJECTS_DOMAIN_HPP_
