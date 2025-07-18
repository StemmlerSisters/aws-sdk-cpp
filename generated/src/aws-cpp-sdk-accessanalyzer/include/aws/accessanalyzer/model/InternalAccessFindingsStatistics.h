﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/accessanalyzer/model/ResourceType.h>
#include <aws/accessanalyzer/model/InternalAccessResourceTypeDetails.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Provides aggregate statistics about the findings for the specified internal
   * access analyzer. This includes counts of active, archived, and resolved
   * findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/InternalAccessFindingsStatistics">AWS
   * API Reference</a></p>
   */
  class InternalAccessFindingsStatistics
  {
  public:
    AWS_ACCESSANALYZER_API InternalAccessFindingsStatistics() = default;
    AWS_ACCESSANALYZER_API InternalAccessFindingsStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API InternalAccessFindingsStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of active findings for each resource type of the specified
     * internal access analyzer.</p>
     */
    inline const Aws::Map<ResourceType, InternalAccessResourceTypeDetails>& GetResourceTypeStatistics() const { return m_resourceTypeStatistics; }
    inline bool ResourceTypeStatisticsHasBeenSet() const { return m_resourceTypeStatisticsHasBeenSet; }
    template<typename ResourceTypeStatisticsT = Aws::Map<ResourceType, InternalAccessResourceTypeDetails>>
    void SetResourceTypeStatistics(ResourceTypeStatisticsT&& value) { m_resourceTypeStatisticsHasBeenSet = true; m_resourceTypeStatistics = std::forward<ResourceTypeStatisticsT>(value); }
    template<typename ResourceTypeStatisticsT = Aws::Map<ResourceType, InternalAccessResourceTypeDetails>>
    InternalAccessFindingsStatistics& WithResourceTypeStatistics(ResourceTypeStatisticsT&& value) { SetResourceTypeStatistics(std::forward<ResourceTypeStatisticsT>(value)); return *this;}
    inline InternalAccessFindingsStatistics& AddResourceTypeStatistics(ResourceType key, InternalAccessResourceTypeDetails value) {
      m_resourceTypeStatisticsHasBeenSet = true; m_resourceTypeStatistics.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The number of active findings for the specified internal access analyzer.</p>
     */
    inline int GetTotalActiveFindings() const { return m_totalActiveFindings; }
    inline bool TotalActiveFindingsHasBeenSet() const { return m_totalActiveFindingsHasBeenSet; }
    inline void SetTotalActiveFindings(int value) { m_totalActiveFindingsHasBeenSet = true; m_totalActiveFindings = value; }
    inline InternalAccessFindingsStatistics& WithTotalActiveFindings(int value) { SetTotalActiveFindings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of archived findings for the specified internal access
     * analyzer.</p>
     */
    inline int GetTotalArchivedFindings() const { return m_totalArchivedFindings; }
    inline bool TotalArchivedFindingsHasBeenSet() const { return m_totalArchivedFindingsHasBeenSet; }
    inline void SetTotalArchivedFindings(int value) { m_totalArchivedFindingsHasBeenSet = true; m_totalArchivedFindings = value; }
    inline InternalAccessFindingsStatistics& WithTotalArchivedFindings(int value) { SetTotalArchivedFindings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resolved findings for the specified internal access
     * analyzer.</p>
     */
    inline int GetTotalResolvedFindings() const { return m_totalResolvedFindings; }
    inline bool TotalResolvedFindingsHasBeenSet() const { return m_totalResolvedFindingsHasBeenSet; }
    inline void SetTotalResolvedFindings(int value) { m_totalResolvedFindingsHasBeenSet = true; m_totalResolvedFindings = value; }
    inline InternalAccessFindingsStatistics& WithTotalResolvedFindings(int value) { SetTotalResolvedFindings(value); return *this;}
    ///@}
  private:

    Aws::Map<ResourceType, InternalAccessResourceTypeDetails> m_resourceTypeStatistics;
    bool m_resourceTypeStatisticsHasBeenSet = false;

    int m_totalActiveFindings{0};
    bool m_totalActiveFindingsHasBeenSet = false;

    int m_totalArchivedFindings{0};
    bool m_totalArchivedFindingsHasBeenSet = false;

    int m_totalResolvedFindings{0};
    bool m_totalResolvedFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
