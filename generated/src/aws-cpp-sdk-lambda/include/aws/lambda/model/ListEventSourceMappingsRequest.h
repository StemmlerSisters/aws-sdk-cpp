﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   */
  class ListEventSourceMappingsRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API ListEventSourceMappingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEventSourceMappings"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;

    AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> – The ARN of the data stream or a stream consumer.</p>
     * </li> <li> <p> <b>Amazon DynamoDB Streams</b> – The ARN of the stream.</p> </li>
     * <li> <p> <b>Amazon Simple Queue Service</b> – The ARN of the queue.</p> </li>
     * <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> – The ARN of the
     * cluster or the ARN of the VPC connection (for <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#msk-multi-vpc">cross-account
     * event source mappings</a>).</p> </li> <li> <p> <b>Amazon MQ</b> – The ARN of the
     * broker.</p> </li> <li> <p> <b>Amazon DocumentDB</b> – The ARN of the DocumentDB
     * change stream.</p> </li> </ul>
     */
    inline const Aws::String& GetEventSourceArn() const { return m_eventSourceArn; }
    inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }
    template<typename EventSourceArnT = Aws::String>
    void SetEventSourceArn(EventSourceArnT&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::forward<EventSourceArnT>(value); }
    template<typename EventSourceArnT = Aws::String>
    ListEventSourceMappingsRequest& WithEventSourceArn(EventSourceArnT&& value) { SetEventSourceArn(std::forward<EventSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the Lambda function.</p> <p class="title"> <b>Name
     * formats</b> </p> <ul> <li> <p> <b>Function name</b> –
     * <code>MyFunction</code>.</p> </li> <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it's limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const { return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    template<typename FunctionNameT = Aws::String>
    void SetFunctionName(FunctionNameT&& value) { m_functionNameHasBeenSet = true; m_functionName = std::forward<FunctionNameT>(value); }
    template<typename FunctionNameT = Aws::String>
    ListEventSourceMappingsRequest& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token returned by a previous call.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListEventSourceMappingsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of event source mappings to return. Note that
     * ListEventSourceMappings returns a maximum of 100 items in each response, even if
     * you set the number higher.</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ListEventSourceMappingsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}
  private:

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet = false;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
