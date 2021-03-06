///*|-----------------------------------------------------------------------------
// *|            This source code is provided under the Apache 2.0 license      --
// *|  and is provided AS IS with no warranty or guarantee of fit for purpose.  --
// *|                See the project's LICENSE.md for details.                  --
// *|           Copyright (C) 2019 Refinitiv. All rights reserved.            --
///*|-----------------------------------------------------------------------------

#include "ConsPerfConfig.h"

ConsPerfConfig::ConsPerfConfig() : PerfConfig ( (char *) "ConsSummary.out" ), steadyStateTime(300), 
statsFilename("ConsStats"), writeStatsInterval(5), displayStats(true), logLatencyToFile(false), 
itemRequestCount(100000), commonItemCount(0), itemRequestsPerSec(500000), requestSnapshots(false),
serviceName("DIRECT_FEED"), useServiceId(false), useUserDispatch( false ), itemFilename("350k.xml"),
msgFilename("MsgData.xml"), postsPerSec(0), latencyPostsPerSec(0), genMsgsPerSec(0), latencyGenMsgsPerSec(0), apiThreadBindList(0)
{
	apiThreadBindList = new long[1];
	apiThreadBindList[0] = -1;	

}
void ConsPerfConfig::clearPerfConfig()
{
	steadyStateTime = 300; 
	threadCount = 1;
	if(threadBindList)
		delete [] threadBindList;
	threadBindList = new long[1];
	threadBindList[0] = -1;

	if(apiThreadBindList)
		delete [] apiThreadBindList;
	apiThreadBindList = new long[1];
	apiThreadBindList[0] = -1;

	summaryFilename = "ConsSummary.out"; 

	statsFilename = "ConsStats";
	writeStatsInterval = 5; 
	displayStats = true; 
	logLatencyToFile = true; 
	serviceName = "DIRECT_FEED";
	ticksPerSec = 1000;
	itemRequestCount = 100000; 
	commonItemCount = 0; 
	itemRequestsPerSec = 500000; 
	requestSnapshots = false;
	postsPerSec = 0; 
	latencyPostsPerSec = 0; 
	genMsgsPerSec = 0; 
	latencyGenMsgsPerSec = 0;
	itemFilename = "350k.xml";
	msgFilename = "MsgData.xml";
	useServiceId = false;
	useUserDispatch = false;
}

ConsPerfConfig::~ConsPerfConfig()
{
	if( apiThreadBindList )
		delete [] apiThreadBindList;

}
