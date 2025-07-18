﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RevokeRestoreAccessBackupVaultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String RevokeRestoreAccessBackupVaultRequest::SerializePayload() const
{
  return {};
}

void RevokeRestoreAccessBackupVaultRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_requesterCommentHasBeenSet)
    {
      ss << m_requesterComment;
      uri.AddQueryStringParameter("requesterComment", ss.str());
      ss.str("");
    }

}



