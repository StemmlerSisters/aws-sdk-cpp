﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3
{
namespace Model
{
  enum class InventoryConfigurationState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace InventoryConfigurationStateMapper
{
AWS_S3_API InventoryConfigurationState GetInventoryConfigurationStateForName(const Aws::String& name);

AWS_S3_API Aws::String GetNameForInventoryConfigurationState(InventoryConfigurationState value);
} // namespace InventoryConfigurationStateMapper
} // namespace Model
} // namespace S3
} // namespace Aws
