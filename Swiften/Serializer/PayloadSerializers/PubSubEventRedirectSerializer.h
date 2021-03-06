/*
 * Copyright (c) 2013-2016 Isode Limited.
 * All rights reserved.
 * See the COPYING file for more information.
 */

#pragma once

#include <memory>

#include <Swiften/Base/API.h>
#include <Swiften/Base/Override.h>
#include <Swiften/Elements/PubSubEventRedirect.h>
#include <Swiften/Serializer/GenericPayloadSerializer.h>

namespace Swift {
    class PayloadSerializerCollection;

    class SWIFTEN_API PubSubEventRedirectSerializer : public GenericPayloadSerializer<PubSubEventRedirect> {
        public:
            PubSubEventRedirectSerializer(PayloadSerializerCollection* serializers);
            virtual ~PubSubEventRedirectSerializer();

            virtual std::string serializePayload(std::shared_ptr<PubSubEventRedirect>) const SWIFTEN_OVERRIDE;
    };
}
