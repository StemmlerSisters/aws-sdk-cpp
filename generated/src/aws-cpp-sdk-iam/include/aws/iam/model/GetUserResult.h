﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/User.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetUser.html">GetUser</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetUserResponse">AWS
   * API Reference</a></p>
   */
  class GetUserResult
  {
  public:
    AWS_IAM_API GetUserResult() = default;
    AWS_IAM_API GetUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A structure containing details about the IAM user.</p>  <p>Due to
     * a service issue, password last used data does not include password use from May
     * 3, 2018 22:50 PDT to May 23, 2018 14:08 PDT. This affects <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_finding-unused.html">last
     * sign-in</a> dates shown in the IAM console and password last used dates in the
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_getting-report.html">IAM
     * credential report</a>, and returned by this operation. If users signed in during
     * the affected time, the password last used date that is returned is the date the
     * user last signed in before May 3, 2018. For users that signed in after May 23,
     * 2018 14:08 PDT, the returned password last used date is accurate.</p> <p>You can
     * use password last used information to identify unused credentials for deletion.
     * For example, you might delete users who did not sign in to Amazon Web Services
     * in the last 90 days. In cases like this, we recommend that you adjust your
     * evaluation window to include dates after May 23, 2018. Alternatively, if your
     * users use access keys to access Amazon Web Services programmatically you can
     * refer to access key last used information because it is accurate for all dates.
     * </p> 
     */
    inline const User& GetUser() const { return m_user; }
    template<typename UserT = User>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = User>
    GetUserResult& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetUserResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    User m_user;
    bool m_userHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
