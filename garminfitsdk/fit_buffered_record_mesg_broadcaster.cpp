/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.101Release
// Tag = production/release/21.101.00-0-gceb92d5
/////////////////////////////////////////////////////////////////////////////////////////////


#include "fit_buffered_record_mesg_broadcaster.hpp"
#include <algorithm>

namespace fit
{

BufferedRecordMesgBroadcaster::BufferedRecordMesgBroadcaster(void)
{
}

void BufferedRecordMesgBroadcaster::AddListener(BufferedRecordMesgListener& mesgListener)
{
   listeners.push_back(&mesgListener);
}

void BufferedRecordMesgBroadcaster::RemoveListener(BufferedRecordMesgListener& mesgListener)
{
   std::vector<BufferedRecordMesgListener*>::iterator it = std::find(listeners.begin(), listeners.end(), &mesgListener);
   if (listeners.end() != it)
      listeners.erase(it);
}

void BufferedRecordMesgBroadcaster::OnMesg(RecordMesg& mesg)
{
   bufferedRecordMesg.SetFields(mesg);
   
   for (int i = 0; i < (int)listeners.size(); i++)
   {
      listeners[i]->OnMesg(bufferedRecordMesg);
   }
}

} // namespace fit
