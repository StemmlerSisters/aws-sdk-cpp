﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSPosixFileSystemUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

OpenZFSPosixFileSystemUser::OpenZFSPosixFileSystemUser(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenZFSPosixFileSystemUser& OpenZFSPosixFileSystemUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uid"))
  {
    m_uid = jsonValue.GetInt64("Uid");
    m_uidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Gid"))
  {
    m_gid = jsonValue.GetInt64("Gid");
    m_gidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecondaryGids"))
  {
    Aws::Utils::Array<JsonView> secondaryGidsJsonList = jsonValue.GetArray("SecondaryGids");
    for(unsigned secondaryGidsIndex = 0; secondaryGidsIndex < secondaryGidsJsonList.GetLength(); ++secondaryGidsIndex)
    {
      m_secondaryGids.push_back(secondaryGidsJsonList[secondaryGidsIndex].AsInt64());
    }
    m_secondaryGidsHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenZFSPosixFileSystemUser::Jsonize() const
{
  JsonValue payload;

  if(m_uidHasBeenSet)
  {
   payload.WithInt64("Uid", m_uid);

  }

  if(m_gidHasBeenSet)
  {
   payload.WithInt64("Gid", m_gid);

  }

  if(m_secondaryGidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secondaryGidsJsonList(m_secondaryGids.size());
   for(unsigned secondaryGidsIndex = 0; secondaryGidsIndex < secondaryGidsJsonList.GetLength(); ++secondaryGidsIndex)
   {
     secondaryGidsJsonList[secondaryGidsIndex].AsInt64(m_secondaryGids[secondaryGidsIndex]);
   }
   payload.WithArray("SecondaryGids", std::move(secondaryGidsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
