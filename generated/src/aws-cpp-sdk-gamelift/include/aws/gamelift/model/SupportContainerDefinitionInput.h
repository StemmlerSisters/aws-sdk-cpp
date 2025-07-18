﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerHealthCheck.h>
#include <aws/gamelift/model/ContainerPortConfiguration.h>
#include <aws/gamelift/model/ContainerDependency.h>
#include <aws/gamelift/model/ContainerMountPoint.h>
#include <aws/gamelift/model/ContainerEnvironment.h>
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
   * <p>Describes a support container in a container group. You can define a support
   * container in either a game server container group or a per-instance container
   * group. Support containers don't run game server processes.</p> <p>This
   * definition includes container configuration, resources, and start instructions.
   * Use this data type when creating or updating a container group definition. For
   * properties of a deployed support container, see <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_SupportContainerDefinition.html">SupportContainerDefinition</a>.</p>
   * <p> <b>Use with: </b> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateContainerGroupDefinition.html">CreateContainerGroupDefinition</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateContainerGroupDefinition.html">UpdateContainerGroupDefinition</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SupportContainerDefinitionInput">AWS
   * API Reference</a></p>
   */
  class SupportContainerDefinitionInput
  {
  public:
    AWS_GAMELIFT_API SupportContainerDefinitionInput() = default;
    AWS_GAMELIFT_API SupportContainerDefinitionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API SupportContainerDefinitionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string that uniquely identifies the container definition within a container
     * group.</p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    SupportContainerDefinitionInput& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Establishes dependencies between this container and the status of other
     * containers in the same container group. A container can have dependencies on
     * multiple different containers. </p> <p>.</p> <p>You can use dependencies to
     * establish a startup/shutdown sequence across the container group. For example,
     * you might specify that <i>ContainerB</i> has a <code>START</code> dependency on
     * <i>ContainerA</i>. This dependency means that <i>ContainerB</i> can't start
     * until after <i>ContainerA</i> has started. This dependency is reversed on
     * shutdown, which means that <i>ContainerB</i> must shut down before
     * <i>ContainerA</i> can shut down. </p>
     */
    inline const Aws::Vector<ContainerDependency>& GetDependsOn() const { return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    template<typename DependsOnT = Aws::Vector<ContainerDependency>>
    void SetDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::forward<DependsOnT>(value); }
    template<typename DependsOnT = Aws::Vector<ContainerDependency>>
    SupportContainerDefinitionInput& WithDependsOn(DependsOnT&& value) { SetDependsOn(std::forward<DependsOnT>(value)); return *this;}
    template<typename DependsOnT = ContainerDependency>
    SupportContainerDefinitionInput& AddDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.emplace_back(std::forward<DependsOnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A mount point that binds a path inside the container to a file or directory
     * on the host system and lets it access the file or directory.</p>
     */
    inline const Aws::Vector<ContainerMountPoint>& GetMountPoints() const { return m_mountPoints; }
    inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }
    template<typename MountPointsT = Aws::Vector<ContainerMountPoint>>
    void SetMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = std::forward<MountPointsT>(value); }
    template<typename MountPointsT = Aws::Vector<ContainerMountPoint>>
    SupportContainerDefinitionInput& WithMountPoints(MountPointsT&& value) { SetMountPoints(std::forward<MountPointsT>(value)); return *this;}
    template<typename MountPointsT = ContainerMountPoint>
    SupportContainerDefinitionInput& AddMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.emplace_back(std::forward<MountPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of environment variables to pass to the container on startup. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline const Aws::Vector<ContainerEnvironment>& GetEnvironmentOverride() const { return m_environmentOverride; }
    inline bool EnvironmentOverrideHasBeenSet() const { return m_environmentOverrideHasBeenSet; }
    template<typename EnvironmentOverrideT = Aws::Vector<ContainerEnvironment>>
    void SetEnvironmentOverride(EnvironmentOverrideT&& value) { m_environmentOverrideHasBeenSet = true; m_environmentOverride = std::forward<EnvironmentOverrideT>(value); }
    template<typename EnvironmentOverrideT = Aws::Vector<ContainerEnvironment>>
    SupportContainerDefinitionInput& WithEnvironmentOverride(EnvironmentOverrideT&& value) { SetEnvironmentOverride(std::forward<EnvironmentOverrideT>(value)); return *this;}
    template<typename EnvironmentOverrideT = ContainerEnvironment>
    SupportContainerDefinitionInput& AddEnvironmentOverride(EnvironmentOverrideT&& value) { m_environmentOverrideHasBeenSet = true; m_environmentOverride.emplace_back(std::forward<EnvironmentOverrideT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Flags the container as vital for the container group to function properly. If
     * an essential container fails, the entire container group restarts. At least one
     * support container in a per-instance container group must be essential. When
     * flagging a container as essential, also configure a health check so that the
     * container can signal that it's healthy. </p>
     */
    inline bool GetEssential() const { return m_essential; }
    inline bool EssentialHasBeenSet() const { return m_essentialHasBeenSet; }
    inline void SetEssential(bool value) { m_essentialHasBeenSet = true; m_essential = value; }
    inline SupportContainerDefinitionInput& WithEssential(bool value) { SetEssential(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for a non-terminal health check. A container automatically
     * restarts if it stops functioning. With a health check, you can define additional
     * reasons to flag a container as unhealthy and restart it. If an essential
     * container fails a health check, the entire container group restarts. </p>
     */
    inline const ContainerHealthCheck& GetHealthCheck() const { return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    template<typename HealthCheckT = ContainerHealthCheck>
    void SetHealthCheck(HealthCheckT&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::forward<HealthCheckT>(value); }
    template<typename HealthCheckT = ContainerHealthCheck>
    SupportContainerDefinitionInput& WithHealthCheck(HealthCheckT&& value) { SetHealthCheck(std::forward<HealthCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the container image to deploy to a container fleet. Provide
     * an image in an Amazon Elastic Container Registry public or private repository.
     * The repository must be in the same Amazon Web Services account and Amazon Web
     * Services Region where you're creating the container group definition. For limits
     * on image size, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/gamelift.html">Amazon
     * GameLift Servers endpoints and quotas</a>. You can use any of the following
     * image URI formats: </p> <ul> <li> <p>Image ID only: <code>[AWS
     * account].dkr.ecr.[AWS region].amazonaws.com/[repository ID]</code> </p> </li>
     * <li> <p>Image ID and digest: <code>[AWS account].dkr.ecr.[AWS
     * region].amazonaws.com/[repository ID]@[digest]</code> </p> </li> <li> <p>Image
     * ID and tag: <code>[AWS account].dkr.ecr.[AWS region].amazonaws.com/[repository
     * ID]:[tag]</code> </p> </li> </ul>
     */
    inline const Aws::String& GetImageUri() const { return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    template<typename ImageUriT = Aws::String>
    void SetImageUri(ImageUriT&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::forward<ImageUriT>(value); }
    template<typename ImageUriT = Aws::String>
    SupportContainerDefinitionInput& WithImageUri(ImageUriT&& value) { SetImageUri(std::forward<ImageUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specified amount of memory (in MiB) to reserve for this container. If you
     * don't specify a container-specific memory limit, the container shares the
     * container group's total memory allocation. </p> <p> <b>Related data type: </b>
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ContainerGroupDefinition.html">ContainerGroupDefinition</a>TotalMemoryLimitMebibytes<code/>
     * </p>
     */
    inline int GetMemoryHardLimitMebibytes() const { return m_memoryHardLimitMebibytes; }
    inline bool MemoryHardLimitMebibytesHasBeenSet() const { return m_memoryHardLimitMebibytesHasBeenSet; }
    inline void SetMemoryHardLimitMebibytes(int value) { m_memoryHardLimitMebibytesHasBeenSet = true; m_memoryHardLimitMebibytes = value; }
    inline SupportContainerDefinitionInput& WithMemoryHardLimitMebibytes(int value) { SetMemoryHardLimitMebibytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of ports that Amazon GameLift Servers can assign to processes in a
     * container. The container port configuration must have enough ports for each
     * container process that accepts inbound traffic connections. A container port
     * configuration can have can have one or more container port ranges. Each range
     * specifies starting and ending values as well as the supported network
     * protocol.</p> <p>Container ports aren't directly accessed by inbound traffic.
     * Amazon GameLift Servers maps each container port to an externally accessible
     * connection port (see the container fleet property
     * <code>ConnectionPortRange</code>). </p>
     */
    inline const ContainerPortConfiguration& GetPortConfiguration() const { return m_portConfiguration; }
    inline bool PortConfigurationHasBeenSet() const { return m_portConfigurationHasBeenSet; }
    template<typename PortConfigurationT = ContainerPortConfiguration>
    void SetPortConfiguration(PortConfigurationT&& value) { m_portConfigurationHasBeenSet = true; m_portConfiguration = std::forward<PortConfigurationT>(value); }
    template<typename PortConfigurationT = ContainerPortConfiguration>
    SupportContainerDefinitionInput& WithPortConfiguration(PortConfigurationT&& value) { SetPortConfiguration(std::forward<PortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of vCPU units to reserve for this container. The container can use
     * more resources when needed, if available. If you don't reserve CPU units for
     * this container, it shares the container group's total vCPU limit. </p> <p>
     * <b>Related data type: </b> <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ContainerGroupDefinition.html">ContainerGroupDefinition</a>
     * TotalCpuLimit </p>
     */
    inline double GetVcpu() const { return m_vcpu; }
    inline bool VcpuHasBeenSet() const { return m_vcpuHasBeenSet; }
    inline void SetVcpu(double value) { m_vcpuHasBeenSet = true; m_vcpu = value; }
    inline SupportContainerDefinitionInput& WithVcpu(double value) { SetVcpu(value); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::Vector<ContainerDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    Aws::Vector<ContainerMountPoint> m_mountPoints;
    bool m_mountPointsHasBeenSet = false;

    Aws::Vector<ContainerEnvironment> m_environmentOverride;
    bool m_environmentOverrideHasBeenSet = false;

    bool m_essential{false};
    bool m_essentialHasBeenSet = false;

    ContainerHealthCheck m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;

    int m_memoryHardLimitMebibytes{0};
    bool m_memoryHardLimitMebibytesHasBeenSet = false;

    ContainerPortConfiguration m_portConfiguration;
    bool m_portConfigurationHasBeenSet = false;

    double m_vcpu{0.0};
    bool m_vcpuHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
