﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>The Amazon GameLift Servers service limits for an Amazon EC2 instance type
   * and current utilization. Amazon GameLift Servers allows Amazon Web Services
   * accounts a maximum number of instances, per instance type, per Amazon Web
   * Services Region or location, for use with Amazon GameLift Servers. You can
   * request an limit increase for your account by using the <b>Service limits</b>
   * page in the Amazon GameLift Servers console.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/EC2InstanceLimit">AWS
   * API Reference</a></p>
   */
  class EC2InstanceLimit
  {
  public:
    AWS_GAMELIFT_API EC2InstanceLimit() = default;
    AWS_GAMELIFT_API EC2InstanceLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API EC2InstanceLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an Amazon EC2 instance type. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions. </p>
     */
    inline EC2InstanceType GetEC2InstanceType() const { return m_eC2InstanceType; }
    inline bool EC2InstanceTypeHasBeenSet() const { return m_eC2InstanceTypeHasBeenSet; }
    inline void SetEC2InstanceType(EC2InstanceType value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = value; }
    inline EC2InstanceLimit& WithEC2InstanceType(EC2InstanceType value) { SetEC2InstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances for the specified type and location that are
     * currently being used by the Amazon Web Services account. </p>
     */
    inline int GetCurrentInstances() const { return m_currentInstances; }
    inline bool CurrentInstancesHasBeenSet() const { return m_currentInstancesHasBeenSet; }
    inline void SetCurrentInstances(int value) { m_currentInstancesHasBeenSet = true; m_currentInstances = value; }
    inline EC2InstanceLimit& WithCurrentInstances(int value) { SetCurrentInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that is allowed for the specified instance type and
     * location.</p>
     */
    inline int GetInstanceLimit() const { return m_instanceLimit; }
    inline bool InstanceLimitHasBeenSet() const { return m_instanceLimitHasBeenSet; }
    inline void SetInstanceLimit(int value) { m_instanceLimitHasBeenSet = true; m_instanceLimit = value; }
    inline EC2InstanceLimit& WithInstanceLimit(int value) { SetInstanceLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    EC2InstanceLimit& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
  private:

    EC2InstanceType m_eC2InstanceType{EC2InstanceType::NOT_SET};
    bool m_eC2InstanceTypeHasBeenSet = false;

    int m_currentInstances{0};
    bool m_currentInstancesHasBeenSet = false;

    int m_instanceLimit{0};
    bool m_instanceLimitHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
