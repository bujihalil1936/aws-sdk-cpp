﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamScopeState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace IpamScopeStateMapper
      {

        static const int create_in_progress_HASH = HashingUtils::HashString("create-in-progress");
        static const int create_complete_HASH = HashingUtils::HashString("create-complete");
        static const int create_failed_HASH = HashingUtils::HashString("create-failed");
        static const int modify_in_progress_HASH = HashingUtils::HashString("modify-in-progress");
        static const int modify_complete_HASH = HashingUtils::HashString("modify-complete");
        static const int modify_failed_HASH = HashingUtils::HashString("modify-failed");
        static const int delete_in_progress_HASH = HashingUtils::HashString("delete-in-progress");
        static const int delete_complete_HASH = HashingUtils::HashString("delete-complete");
        static const int delete_failed_HASH = HashingUtils::HashString("delete-failed");


        IpamScopeState GetIpamScopeStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == create_in_progress_HASH)
          {
            return IpamScopeState::create_in_progress;
          }
          else if (hashCode == create_complete_HASH)
          {
            return IpamScopeState::create_complete;
          }
          else if (hashCode == create_failed_HASH)
          {
            return IpamScopeState::create_failed;
          }
          else if (hashCode == modify_in_progress_HASH)
          {
            return IpamScopeState::modify_in_progress;
          }
          else if (hashCode == modify_complete_HASH)
          {
            return IpamScopeState::modify_complete;
          }
          else if (hashCode == modify_failed_HASH)
          {
            return IpamScopeState::modify_failed;
          }
          else if (hashCode == delete_in_progress_HASH)
          {
            return IpamScopeState::delete_in_progress;
          }
          else if (hashCode == delete_complete_HASH)
          {
            return IpamScopeState::delete_complete;
          }
          else if (hashCode == delete_failed_HASH)
          {
            return IpamScopeState::delete_failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamScopeState>(hashCode);
          }

          return IpamScopeState::NOT_SET;
        }

        Aws::String GetNameForIpamScopeState(IpamScopeState enumValue)
        {
          switch(enumValue)
          {
          case IpamScopeState::create_in_progress:
            return "create-in-progress";
          case IpamScopeState::create_complete:
            return "create-complete";
          case IpamScopeState::create_failed:
            return "create-failed";
          case IpamScopeState::modify_in_progress:
            return "modify-in-progress";
          case IpamScopeState::modify_complete:
            return "modify-complete";
          case IpamScopeState::modify_failed:
            return "modify-failed";
          case IpamScopeState::delete_in_progress:
            return "delete-in-progress";
          case IpamScopeState::delete_complete:
            return "delete-complete";
          case IpamScopeState::delete_failed:
            return "delete-failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamScopeStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
