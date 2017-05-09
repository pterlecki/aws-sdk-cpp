﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/codestar/model/UserProfileSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStar
{
namespace Model
{

UserProfileSummary::UserProfileSummary() : 
    m_userArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_sshPublicKeyHasBeenSet(false)
{
}

UserProfileSummary::UserProfileSummary(const JsonValue& jsonValue) : 
    m_userArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_sshPublicKeyHasBeenSet(false)
{
  *this = jsonValue;
}

UserProfileSummary& UserProfileSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("userArn"))
  {
    m_userArn = jsonValue.GetString("userArn");

    m_userArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("emailAddress"))
  {
    m_emailAddress = jsonValue.GetString("emailAddress");

    m_emailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sshPublicKey"))
  {
    m_sshPublicKey = jsonValue.GetString("sshPublicKey");

    m_sshPublicKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue UserProfileSummary::Jsonize() const
{
  JsonValue payload;

  if(m_userArnHasBeenSet)
  {
   payload.WithString("userArn", m_userArn);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("emailAddress", m_emailAddress);

  }

  if(m_sshPublicKeyHasBeenSet)
  {
   payload.WithString("sshPublicKey", m_sshPublicKey);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStar
} // namespace Aws