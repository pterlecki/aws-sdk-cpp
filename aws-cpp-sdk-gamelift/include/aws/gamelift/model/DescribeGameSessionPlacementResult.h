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
#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameSessionPlacement.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{
  class AWS_GAMELIFT_API DescribeGameSessionPlacementResult
  {
  public:
    DescribeGameSessionPlacementResult();
    DescribeGameSessionPlacementResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeGameSessionPlacementResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Object that describes the requested game session placement.</p>
     */
    inline const GameSessionPlacement& GetGameSessionPlacement() const{ return m_gameSessionPlacement; }

    /**
     * <p>Object that describes the requested game session placement.</p>
     */
    inline void SetGameSessionPlacement(const GameSessionPlacement& value) { m_gameSessionPlacement = value; }

    /**
     * <p>Object that describes the requested game session placement.</p>
     */
    inline void SetGameSessionPlacement(GameSessionPlacement&& value) { m_gameSessionPlacement = value; }

    /**
     * <p>Object that describes the requested game session placement.</p>
     */
    inline DescribeGameSessionPlacementResult& WithGameSessionPlacement(const GameSessionPlacement& value) { SetGameSessionPlacement(value); return *this;}

    /**
     * <p>Object that describes the requested game session placement.</p>
     */
    inline DescribeGameSessionPlacementResult& WithGameSessionPlacement(GameSessionPlacement&& value) { SetGameSessionPlacement(value); return *this;}

  private:
    GameSessionPlacement m_gameSessionPlacement;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws