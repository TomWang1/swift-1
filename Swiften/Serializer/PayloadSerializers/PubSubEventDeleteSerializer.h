/*
 * Copyright (c) 2013-2016 Isode Limited.
 * All rights reserved.
 * See the COPYING file for more information.
 */

#pragma once

#include <memory>

#include <Swiften/Base/API.h>
#include <Swiften/Base/Override.h>
#include <Swiften/Elements/PubSubEventDelete.h>
#include <Swiften/Serializer/GenericPayloadSerializer.h>

namespace Swift {
    class PayloadSerializerCollection;

    class SWIFTEN_API PubSubEventDeleteSerializer : public GenericPayloadSerializer<PubSubEventDelete> {
        public:
            PubSubEventDeleteSerializer(PayloadSerializerCollection* serializers);
            virtual ~PubSubEventDeleteSerializer();

            virtual std::string serializePayload(std::shared_ptr<PubSubEventDelete>) const SWIFTEN_OVERRIDE;

        private:


        private:
            PayloadSerializerCollection* serializers;
    };
}
