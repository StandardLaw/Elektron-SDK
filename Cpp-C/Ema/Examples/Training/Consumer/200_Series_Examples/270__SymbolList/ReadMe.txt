Summary
=======

The 270__SymbolList application is provided as an example of OMM Consumer
application written to the EMA library.

This application demonstrates basic usage of the EMA library for accessing
and parsing of OMM SymbolList data from Reuters Data Feed Direct (RDF-D),
directly from an OMM Provider application, or from Thomson Reuters Advanced
Distribution Server.

The 270__SymbolList showcases opening and processing of SymbolList item.
While processing messages, this application simply prints their content to
screen using native or RWF decoding methods.


Detailed Description
====================

The 270__SymbolList implements the following high level steps:

+ Implements OmmConsumerClient class in AppClient
  - overrides desired methods
  - provides own methods as needed, e.g. decode( const FieldList& )
    - the decode( const FieldList& ) iterates through the received FieldList,
	  extracts each FieldEntry reference from the current position on the
	  FieldList, and extracts field id, name and value of the current FieldEntry
	- the decode( const Map& ) iterates through the received Map, extracts Summary
	  if it is present, extracts MapEntry from which it extracts key, and load values
	- both methods use native / RWF data format while extracting data
+ Instantiates AppClient object that receives and processes item messages
+ Instantiates and modifies OmmConsumerConfig object
  - sets user name to "user"
  - sets host name on the preconfigured connection to "localhost"
  - sets port on the preconfigured connection to "14002"
+ Instantiates an OmmConsumer object which initializes the connection 
  and logs into the specified server.
+ Opens streaming item interest
  - SymbolList .AV.N item from DIRECT_FEED service
+ Processes data received from API for 60 seconds
  - all received messages are processed on API thread of control
+ Exits

Note: if needed, these and other details may be modified to fit local
      environment using EmaConfig.xml file.
	  
Note: please refer to the EMA library ReadMe.txt file for details on
      standard configuration.