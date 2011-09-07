/* Copyright (c) 2001, 2010, Oracle and/or its affiliates. All rights reserved. */

  /*
  |  Outside In Viewer Technology - Include
  |
  |  Include:      SCCERR.H
  |  Environment:  Portable
  |  Function:     Unified error codes for
  |                Outside In Viewer Technology Specification 4.0
  |    
  */


#ifndef USE_SCCERR_2

#ifndef _SCCERR_H
#define _SCCERR_H

#ifdef __cplusplus
extern "C"
{
#endif

#define SCCERR_USEROFFSET             0x00000100


/******************************************************
|  NOTICE!
|  DO NOT renumber the errors below!
|
|******************************************************/  


/*
|  G E N E R A L   E R R O R S 
*/
#define SCCERR_OK                     0   /* No error                                                      */
#define SCCERR_UNKNOWN                18  /* An unknown error has occurred                                 */
#define SCCERR_LEG_UNKNOWNFAILURE     8   /* An unknown error has occurred                                 */
#define SCCERR_BADPARAM               15  /* One or more of the passed in parameters is invalid            */
#define SCCERR_ABORT                  32  /* User aborted or exception trapped                             */
#define SCCERR_CANCEL                 20  /* User cancelled                                                */
#define SCCERR_NOINIT                 21  /* Module has not yet been initialized                           */
#define SCCERR_MACINITFAILED          28  /* SCCVW_MACINIT message process failed                          */
#define SCCERR_MESSAGEHANDLED         24
#define SCCERR_NOITEM                 37
#define SCCERR_NONEFOUND              25  /* The requested item could not be found                         */
#define SCCERR_MORE                   35
#define SCCERR_NOTHANDLED             50  /* The callback function was not handled or does not exist       */
#define SCCERR_SYSTEM              0x080  /* Operating system generated error                              */
#define SCCERR_PROCCREATE          0x081  /* Process creation error                                        */
#define SCCERR_PROCDESTROY         0x082  /* Process destruction error                                     */
#define SCCERR_PROCTIMEOUT         0x083  /* Process exceeded its allotted run time.                       */
#define SCCERR_ASSERTIONFAILED     0x084  /* Assertion failure                                             */
#define SCCERR_DEBUGERROR          0x085  /* Generated by UTDEBUGERROR macro                               */
#define SCCERR_NOCHANGE            0x086  /* No changes were made                                          */
#define SCCERR_DISPLAYOPENFAILED   0x087  /* Failed to open display (XOpenDisplay failed)                  */
#define SCCERR_WRONGDATAFORMAT     0x088  /* Data sent was recognized, but in an unexpected format         */
#define SCCERR_INDEXOUTOFBOUNDS    0x089  /* Specified index is outside the legal range                    */
#define SCCERR_PROCESSDESTROY      0x090  /* Error destroying a process                                    */
#define SCCERR_WOULDBLOCK          0x091  /* Satisfying the call would require blocking the thread         */

/* 
|  M E M O R Y   E R R O R S
*/
#define SCCERR_ALLOCFAILED            13  /* Not enough memory for an allocation                           */
#define SCCERR_OUTOFMEMORY            30  /* Insufficient memory to perform the operation                  */
#define SCCERR_INSUFFICIENTBUFFER     46  /* The provided buffer is not large enough to contain the result */
#define SCCERR_MEMORYLEAK             48  /* A memory leak was detected                                    */
#define SCCERR_MEMTABLEFULL        0x100
#define SCCERR_INVALIDHANDLE       0x101
#define SCCERR_NULLHANDLE          0x102
#define SCCERR_LOCKEDHANDLE        0x103
#define SCCERR_UNLOCKEDHANDLE      0x104
#define SCCERR_NULLPOINTER         0x105

/*
|  F I L E   E R R O R S 
*/

#define SCCERR_FILEOPENFAILED         7   /* The file could not be opened                                  */
#define SCCERR_BADFILE                9   /* The file is corrupt                                           */
#define SCCERR_EMPTYFILE              10  /* The file is empty                                             */
#define SCCERR_PROTECTEDFILE          11  /* The file is password protected or encrypted                   */
#define SCCERR_SUPFILEOPENFAILED      12  /* The filter could not open additional files needed to view     */
#define SCCERR_NOFILE                 16  /* No file is currently open                                     */
#define SCCERR_EOF                    31  /* Unexpected EOF in file                                        */
#define SCCERR_FILECREATE             34  /* Error while creating file                                     */
#define SCCERR_FILECHANGED            38  /* File has changed unexpectedly                                 */
#define SCCERR_FILEWRITEFAILED        47  /* Error writing to file                                         */
#define SCCERR_DRMFILE				  49  /* The file is protected by DRM tools.                           */


#define SCCERR_INVALIDFILEHANDLE   0x140  /* File handle is invalid                                        */
#define SCCERR_OPENINPUTFAILED     0x141
#define SCCERR_FILECOPYFAILED      0x142
#define SCCERR_FILENOTAVAILABLE    0x143
#define SCCERR_RECORDDELETED       0x144  /* The requested record has been deleted                         */
#define SCCERR_INVALIDPATH         0x145  /* The specified path does not exist                             */
#define SCCERR_INVALIDSPEC         0x146  /* The specified spec is not valid.                              */
#define SCCERR_BADINFOID           0x147  /* dwInfoID parameter to IOGetInfo() was invalid                 */
#define SCCERR_SEEKOUTOFRANGE      0x148
#define SCCERR_BADFILENAME		   0x149  /* Processing of archive file entry has resulted in a file whose full name exceeds OS limits. */
#define SCCERR_EXTERNALURLREFERENCE 0x150 /* The locator refers to an external URL that can not be accessed */
#define SCCERR_FILESIZE			    0x151 /* File size exceeds the maximum size that can be processed */
#define SCCERR_LINKTOFILE           0x152 /* The object links to file and can not be extract from the file */
#define SCCERR_NOTARCHIVEFILE       0x153 /* The file is not archive file and can not be opened when the archive only mode is set */
#define SCCERR_NOTSUPPORTEDARCHIVEFILE    0x154 /* The file is not supported archive file and can not be opened when the archive only mode is set */
#define SCCERR_INVALIDHDOC          0x155 /* The hDoc created as the archive only mode and can not be used in the function */

/*
|  F I L E   I D   E R R O R S 
*/
#define SCCERR_INVALIDID              1   /* The passed or generated file ID is invalid                    */
#define SCCERR_UNSUPPORTEDFORMAT      14  /* The file is in an unsupported format                          */
/* Continue at 0x180 */

/*
|  F I L T E R   E R R O R S
*/
#define SCCERR_NOFILTER               4   /* No filter available for this file type                        */
#define SCCERR_FILTERLOADFAILED       2   /* The filter DLL for this file type could not be loaded.        */
                                          /* This error sometimes appears if the filter was                */
                                          /* accidentally built in debug mode and the target machine does  */
                                          /* not have MSVCRTD.DLL.                                         */
#define SCCERR_FILTERALLOCFAILED      3   /* The filter DLL could not allocate enough memory               */
#define SCCERR_FILTERTIMEOUT          27  /* Filter timed out                                              */
#define SCCERR_FILTEREXCEPTACCESS     39  /* Exception in filter: access violation                         */
#define SCCERR_FILTEREXCEPTZERO       40  /* Exception in filter: divide by zero                           */
#define SCCERR_FILTEREXCEPTOTHER      41  /* Exception in filter: other exception                          */
#define SCCERR_FILTERSCRAMBLEERROR    42  /* Filter failed scramble test                                   */
#define SCCERR_FILTERTILEMAXEXCEEDED  43  /* Bitmap tile size exceeded maximum                             */
#define SCCERR_PROTOCOLMISMATCH       0x1C0 /* Protocol mismatch between adjacent pipeline components      */
#define SCCERR_FORMATMISMATCH         0x1C1 /* Format mismatch between adjacent pipeline components        */
#define SCCERR_ACTIVECOMPONENT        0x1C2 /* Last component in pipeline is not active                    */
#define SCCERR_ENDOFSECTION           0x1C3 /* Returned by passive components at the end of a section      */
#define SCCERR_ENDOFDOCUMENT          0x1C4 /* Returned by passive components at the end of the document   */
#define SCCERR_NOHTMLEXPORTFILTER	  0x1C5 /* No export filter available to translate to html. */
#define SCCERR_NOGRAPHICEXPORTFILTER  0x1C6 /* No export filter available to translate to selected graphic type. */
#define SCCERR_OCRMISSING             0x1C7 /* Either the OCR bridge module or the OCR engine is missing. */
#define SCCERR_STREAMOPENFAILED       0x1C8 /* FAERR_STREAMOPENFAILED                                      */
#define SCCERR_FAINITFAILED           0x1C9 /* FAERR_INITFAILED                                            */
#define SCCERR_FANOMORE               0x1CA /* FAERR_NOMORE                                                */
#define SCCERR_FAREBUILD              0x1CB /* FAERR_REBUILD                                               */

/*
|  D I S P L A Y   E N G I N E   E R R O R S
*/
#define SCCERR_NODISPLAYENGINE        19  /* A display engine is not available for this file type          */
#define SCCERR_DISPLAYINITFAILED      5   /* The display window could not be initialized                   */
#define SCCERR_NODATATORENDER         51  /* No data to render - used by MULTIMEDIA display engine         */

/* Continue at 0x200 */

/* 
|  C H U N K E R   E R R O R S
*/
#define SCCERR_CHUNKERINITFAILED      6   /* The chunker (SCCCH.DLL) could not be initialized              */
#define SCCERR_DATANOTAVAILABLE       45  /* The requested data is not yet available                       */
#define SCCERR_XCHSEQUENTIALACCESSVIOLATION		0x240	/* An expired data point has been requested in a   */
                                                        /* sequential access situation	  			       */

#define SCCERR_CHUNKERFAILURE         0x241 /* any of a number of errors which are currently being called  */
                                            /* "Out Of Memory"                                             */
/* Continue at 0x242 */

/*
|  V I E W E R   E R R O R S 
*/
#define SCCERR_VIEWERBAIL             36  /* Viewer bailed out                                             */
/* Continue at 0x280 */

/*
|  C H A R M A P   E R R O R S
*/
#define SCCERR_CHARMAPFAILED          33  /* Character mapping routines failed                             */
/* Continue at 0x2C0 */

/* 
|  P R I N T I N G   E R R O R S
*/
#define SCCERR_LASTPAGE               22  /* Page just drawn is the last in the file                       */
#define SCCERR_NOPAGE                 23  /* Requested page doesn't exist or isn't yet available           */
#define SCCERR_OTHERPRINTING          29  /* Another print process is already in progress                  */
/* Continue at 0x300 */

/* 
|  F E A T U R E   E R R O R S
*/
#define SCCERR_FEATURENOTAVAIL        17  /* This feature is not supported in this build                   */
#define SCCERR_RAWTEXTDISABLED        26
#define SCCERR_UNSUPPORTEDCOMPRESSION 270	/* encountered "unlicensed" LZW or JPG compression             */
/* Continue at 0x340 */

/*
|  R F A   E R R O R S
*/
#define SCCERR_DATAREMOTEERROR        44  /* RFA remote data error                                         */

/* Continue at 0x380 */

/*
|  E X C E P T I O N S
*/
#define SCCERR_EXCEPTION                        0x3C0 /* An exception has occurred                          */
#define SCCERR_EXCEPT_ACCESS_VIOLATION          0x3C1 /* Access violation                                   */
#define SCCERR_EXCEPT_BREAKPOINT                0x3C2 /* Breakpoint encountered                             */
#define SCCERR_EXCEPT_DATATYPE_MISALIGNMENT     0x3C3 /* Data misalignment                                  */
#define SCCERR_EXCEPT_SINGLE_STEP               0x3C4 /* Trace trap single step indicated                   */
#define SCCERR_EXCEPT_ARRAY_BOUNDS_EXCEEDED     0x3C5 /* Out of bounds array element referenced             */
#define SCCERR_EXCEPT_FLT_DENORMAL_OPERAND      0x3C6 /* Floating point value is denormal                   */
#define SCCERR_EXCEPT_FLT_DIVIDE_BY_ZERO        0x3C7 /* Floating point divide by zero                      */
#define SCCERR_EXCEPT_FLT_INEXACT_RESULT        0x3C8 /* Result cannot be represented as decimal fraction   */
#define SCCERR_EXCEPT_FLT_INVALID_OPERATION     0x3C9 /* General floating point exception                   */
#define SCCERR_EXCEPT_FLT_OVERFLOW              0x3CA /* Floating point exponent overflow                   */
#define SCCERR_EXCEPT_FLT_STACK_CHECK           0x3CB /* Floating point stack underflow or overflow         */
#define SCCERR_EXCEPT_FLT_UNDERFLOW             0x3CC /* Floating point exponent underflow                  */
#define SCCERR_EXCEPT_INT_DIVIDE_BY_ZERO        0x3CD /* Integer divide by zero                             */
#define SCCERR_EXCEPT_INT_OVERFLOW              0x3CE /* Integer overflow                                   */
#define SCCERR_EXCEPT_PRIV_INSTRUCTION          0x3CF /* Priveleged instruction                             */
#define SCCERR_EXCEPT_NONCONTINUABLE            0x3D0 /* A noncontinuable exception has occurred            */
#define SCCERR_EXCEPT_UNKNOWN                   0x3D1 /* Unknown exception type                             */

#define SCCERR_STACK_BUFFER_OVERRUN             0x3D2 /* Stack Buffer Overrun detected                      */

/*
| U T  E X C E P T I O N S
*/
#define SCCERR_GPFAULT        100
#define SCCERR_DIVIDEBYZERO   101
#define SCCERR_OTHEREXCEPTION 102


/*
|  T E S T   E R R O R S
*/
#define SCCERR_TESTNOTAVAILABLE                 0x400 /* The requested test is not available                */
#define SCCERR_TESTTIMEOUT                      0x401 /* The test timed out                                 */
#define SCCERR_CREATEBINFAILED                  0x402 /* Unable to create binary file                       */
#define SCCERR_OPENBINFAILED                    0x403 /* Unable to open binary file                         */
#define SCCERR_WRITEBINFAILED                   0x404 /* Unable to write to binary file                     */
#define SCCERR_READBINFAILED                    0x405 /* Unable to read from binary file                    */
#define SCCERR_OPENDUMPFAILED                   0x406 /* Unable to open dump file                           */
#define SCCERR_COMPAREFAILED                    0x407 /* Chunker compare failed                             */
#define SCCERR_CHUNKERRUNMISMATCH               0x408 /* Chunkers had different run counts                  */
#define SCCERR_CHUNKERSIZEMISMATCH              0x409 /* Chunkers had different run sizes                   */
#define SCCERR_CHUNKERFAILED                    0x40A /* Chunker failure                                    */
#define SCCERR_CHUNKEROVERRUN                   0x40B /* Chunker run count overflow                         */
#define SCCERR_COMPRESSIONFAILED                0x40C /* General Compression failure                        */
#define SCCERR_STREAMBAIL                       0x40D /* General stream bailout                             */
#define SCCERR_MISSINGELEMENT                   0x40E
#define SCCERR_TESTCOMPLETE                     0x40F /* Test is complete                                   */
#define SCCERR_TESTMODESWITCH                   0x410
#define SCCERR_BASELINEFILENOTFOUND             0x411 /* A baseline file was not found for a compare file   */
#define SCCERR_COMPAREFILENOTFOUND              0x412 /* A compare file was not found for a baseline file   */
#define SCCERR_TECHNOTAVAILABLE                 0x420 /* Technology is not available                        */
#define SCCERR_TESTFILESEMPTY                   0x421 /* Both the baseline and compare files are empty      */

/*
|  C O M M U N I C A T I O N S   E R R O R S
*/
#define SCCERR_INVALIDRESPONSE                  0x500 /* Received an unexpected response                    */
#define SCCERR_COMMTIMEOUT                      0x501 /* Communications timeout                             */
#define SCCERR_COMMUNKNOWN                      0x502 /* General communications error                       */
#define SCCERR_CONNECTIONREFUSED                0x503 /* Connection refused                                 */
#define SCCERR_COMMFAULT                        0x504 /* Communications fault                               */
#define SCCERR_CONNECTIONDOWN                   0x505 /* Host or network is down                            */
#define SCCERR_CONNECTIONUNREACHABLE            0x506 /* Host or network is unreachable                     */
#define SCCERR_DISCONNECTED                     0x507 /* Unexpected disconnection                           */
#define SCCERR_SYNCHRONIZE                      0x508 /* Synchronization error                              */

/* 
|  H T M L  E X P O R T  E R R O R S
|
| [U] = unused
*/
#define SCCERR_BI_FIRSTERROR                    0x600 /* First HX error code                                              */
#define SCCERR_BI_GENERAL                       0x600 /* General error has occured [U]                                    */
#define SCCERR_BI_TREE                          0x601 /* Element specified does not conform to the parse tree structure   */
#define SCCERR_BI_INVALID_VAL                   0x602 /* an integer or current/next/previous token was expected           */
#define SCCERR_BI_NONE                          0x603 /* no error [U]                                                     */
#define SCCERR_BI_ENDMACRO                      0x604 /* {## /xx} tag not found                                           */
#define SCCERR_BI_ENDBARNEY                     0x604
#define SCCERR_BI_START                         0x605 /* start brace "{" expected and not found [U]                       */
#define SCCERR_BI_LT                            0x605
#define SCCERR_BI_EQ                            0x606 /* equal sign "=" expected and not found                            */
#define SCCERR_BI_END                           0x607 /* end brace "}" expected and not found                             */
#define SCCERR_BI_GT                            0x607
#define SCCERR_BI_ACTION                        0x608 /* Error parsing "ACTION = "statements [U]                          */
#define SCCERR_BI_SECTION                       0x609 /* section not found                                                */
#define SCCERR_BI_BARNEY                        0x609
#define SCCERR_BI_ELEMENT                       0x60A /* Error parsing "ELEMENT = " statement                             */
#define SCCERR_BI_LINK                          0x60B /* Error parsing "LINK = " statement [U]                            */
#define SCCERR_BI_TAG                           0x60C /* Error parsing "TAG = " statement [U]                             */
#define SCCERR_BI_TEMPLATE                      0x60D /* Error parsing "TEMPLATE = " statement                            */
#define SCCERR_BI_TYPE                          0x60E /* Error parsing "TYPE = " statement                                */
#define SCCERR_BI_TYPENAME                      0x60F /* Error parsing "NAME = " statement [U]                            */
#define SCCERR_BI_DEFINE                        0x610 /* Error parsing "ACTION = DEFINE" statement [U]                    */ 
#define SCCERR_BI_DOCUMENT                      0x611 /* Error in document data                                           */
#define SCCERR_BI_GENLINK                       0x612 /* Error parsing GENLINK statement                                  */
#define SCCERR_BI_INSERT                        0x613 /* Error parsing INSERT statement                                   */
#define SCCERR_BI_REPEAT                        0x614 /* Error parsing REPEAT statement                                   */
#define SCCERR_BI_CHKTRAN                       0x615 /* Error in tree transition Element [U]                             */
#define SCCERR_BI_ALLOC                         0x616 /* Error in allocating memory in MiscBuffer [U]                     */
#define SCCERR_BI_INVALIDCMD                    0x617 /* Error - invalid command [U]                                      */
#define SCCERR_BI_INVALIDERRNUM                 0x618 /* Invalid error number [U]                                         */
#define SCCERR_BI_HANDLEELEM                    0x619 /* Error in converting document element [U]                         */
#define SCCERR_BI_ASISOUTTEXT                   0x61A /* Error writing normal text from input file to an output file [U]  */
#define SCCERR_BI_OUTTEXT                       0x61B /* Error writing parser-generated HTML text to an output file [U]   */
#define SCCERR_BI_NOTEMPLATE                    0x61C /* Error opening template file                                      */
#define SCCERR_BI_OUTFILEFAIL                   0x61D /* Error opening output file [U]                                    */
#define SCCERR_NOENDREPEAT                      0x61E /* No {## /repeat} tag found                                        */
#define SCCERR_NOENDIF                          0x61F /* No {## /if} tag found                                            */
#define SCCERR_NOENDIGNORE                      0x620 /* No {## /ignore} tag found                                        */
#define SCCERR_NONREPEAT                        0x621 /* Element specified in repeat is non-repeatable element            */
#define SCCERR_REPEATENDONINDEX                 0x622 /* Repeat element ended on the index [U]                            */
#define SCCERR_IFENDONINDEX                     0x623 /* If element ended on the index [U]                                */
#define SCCERR_INSERTENDONINDEX                 0x624 /* Insert element ended on the index [U]                            */
#define SCCERR_NOELEMENT                        0x625 /* No element was given                                             */
#define SCCERR_INVALIDTAG                       0x626 /* Invalid ## tag  [U]                                              */
#define SCCERR_NOSTARTMACRO                     0x627 /* End {## /..} with no corresponding start {## ..}                 */
#define SCCERR_NOSTARTTAG                       0x627
#define SCCERR_INVALIDTYPE                      0x628 /* Document type given is not valid                                 */
#define SCCERR_NOVALUE                          0x629 /* No value given for sections.x.type                               */
#define SCCERR_NOCONDITION                      0x62A /* No condition given or missing '}'                                */
#define SCCERR_INVALIDLINKPARAM                 0x62B /* Invalid parameter in ## link macro                               */
#define SCCERR_NOLINKPARAM                      0x62C /* Missing all parameters to link macro                             */
#define SCCERR_BADCOUNTORVALUE                  0x62D /* Count or Value element can only be followed by '}'               */
#define SCCERR_INVALIDELSE                      0x62E /* {## else} not preceded by {## if...}                             */
#define SCCERR_INVALIDCOND                      0x62F /* Invalid parameter in if condition                                */
#define SCCERR_TEMPLATECREATE                   0x630 /* The creation of the default template failed.                     */
#define SCCERR_MAXELEMSPASSED                   0x631 /* The element exceeded the maximum allowable number of elements    */
#define SCCERR_NOTYPE                           0x632 /* No type was given for sections.x.type                            */
#define SCCERR_CUSTOMELEMENT                    0x633 /* The element is a custom element. Basically, this is a flag.      */
#define SCCERR_INVALIDELSEIF                    0x634 /* {## elseif} not preceded by {## if...}                           */
#define SCCERR_BI_CSSPRAGMA                     0x635 /* Pragma.CSSFile required and not present                          */
#define SCCERR_BI_ANCHOR                        0x636 /* Invalid anchor value                                             */
#define SCCERR_BI_LABEL                         0x637 /* Invalid label value                                              */
#define SCCERR_BI_DECKSIZEEXCEEDED              0x638 /* Template-generated text exceeds the deck size                    */
#define SCCERR_BI_UNSUPPORTEDMACRO              0x639 /* Macro not supported in this HTML flavor                          */
#define SCCERR_INTERNALEXPORTFILTER             0x63A /* Internal Export Filter Error                                     */
#define SCCERR_TEMPLATEPARSE                    0x63B /* Error parsing the template                                       */
#define SCCERR_OUTPUTFILE                       0x63C /* Error generating output file                                     */
#define SCCERR_INTERNALELEMENT                  0x63D /* Internal element tree error                                      */
#define SCCERR_INTERNALPREVIEW                  0x63E /* Internal preview document error                                  */
#define SCCERR_INTERNALPROCESS                  0x63F /* Internal process document error                                  */
#define SCCERR_TRUNCATIONLIMITREACHED           0x640 /* Non-fatal error:  we've reached the insertion truncation limit   */
#define SCCERR_NONBREAKINGREPEAT                0x641 /* {## repeat} statement found in unit header or footer             */
#define SCCERR_NONBREAKINGTEMPLATE              0x642 /* this template cannot be used with a nonzero deck size            */
#define SCCERR_INVALIDATTRIBUTE                 0x643 /* invalid attribute                                                */
#define SCCERR_INVALIDATTRIBVALUE               0x644 /* invalid or missing attribute value                               */
#define SCCERR_MALFORMEDUNIT                    0x645 /* malformed unit - check for matching header and footer tags       */
#define SCCERR_TEXTBUFFERTOOSMALL               0x646 /* Text buffer size is too small                                    */
#define SCCERR_BUFFERTOOSMALLFORGRAPHICS        0x647 /* Buffer size is too small to export graphics                      */
#define SCCERR_INTERNALEXMU                     0x648 /* Internal export memory utility error                             */
#define SCCERR_INTERNALEXLM                     0x649 /* Internal export list management error                            */
#define SCCERR_INTERNALPARA                     0x64A /* Internal export para error                                       */
#define SCCERR_INTERNALSTYLE                    0x64B /* Internal export style error                                      */
#define SCCERR_INTERNALTABLE                    0x64C /* Internal export table error                                      */
#define SCCERR_INTERNALTAGS                     0x64D /* Internal export tags error                                       */
#define SCCERR_INTERNALGRAPHICS                 0x64E /* Internal export graphics error                                   */
#define SCCERR_GRIDCELLLIMITREACHED             0x64F /* Non-fatal error:  we've reached the grid cell truncation limit   */
#define SCCERR_INTERNALTAGID					0x650 /* Internal export tag id error									  */
#define SCCERR_INTERNALLOCATIONID				0x651 /* Internal export object locator Id error						  */ 
#define SCCERR_INTERNALSSCELL					0x652 /* Internal export spreadsheet cell error							  */
#define SCCERR_INTERNALEMPTYSHEET				0x653 /* Internal export spreadsheet error								  */
#define SCCERR_INTERNALDOCUMENT                 0x654 /* Internal document tree error                                     */
#define SCCERR_SECTNODATA                       0x655 /* Section no data error                                            */
#define SCCERR_BI_LASTERROR                     0x655 /* Last HX error code                                               */

/* 
|  I M A G E  E X P O R T  E R R O R S
|
| 
*/
#define SCCERR_STARTPAGEERROR                   0x700 /* The start page value is larger than the number of pages in the document */
#define SCCERR_ENDPAGEERROR                     0x701 /* The start page value is larger than the end page value */
#define SCCERR_WATERMARKWILLNOTFITTARGET		0x702
#define SCCERR_WATERMARKTYPENOTSUPPORTED		0x703

/*
|
|  X T R E E   E R R O R S
|
*/
#define SCCERR_NODERELEASED         0x800          /* Node is already released and may not be accessed */
#define SCCERR_NODEATTACHED         0x801          /* Node is already attached to a parent - can't attach again */
#define SCCERR_NODENOTATTACHED      0x802          /* Node is not yet attached to a parent */
#define SCCERR_ALLCHILDRENATTACHED  0x803          /* No more children may be attached to the node */
#define SCCERR_NODEATTRIBUTESDONE   0x804          /* Attributes may not be changed */
#define SCCERR_DUPLICATEID          0x805          /* Attempted to create a new ID with the same string value as an existing ID */
#define SCCERR_IDASSIGNED           0x806          /* Attempted to change the ID string of a node */
#define SCCERR_NODEATTRIBUTESNOTDONE 0x807         /* Attributes may not be accessed by the consumer */
#define SCCERR_DIFFERENTTREE        0x808          /* The node is from a different tree */

/*
| 
| D Y N A M I C  L O A D  L I B R A R Y  E R R O R S
|
*/
#define SCCERR_ANNOLOAD				0xA00
#define SCCERR_ANNOFUNCTION		    0xA01
  
/*
| Character set map bin file error
*/
#define SCCERR_NOCHARSETMAPBINFILE  0x900


/*
|   Win32V/Output Solution Errors
*/
#define SCCERR_NOGDFONTS                0xB00
#define SCCERR_OUTPUTSOLUTIONLOADFAILED 0xB01
#define SCCERR_INVALIDFONTDIR		    0x0B02
#define SCCERR_NOVALIDFONTS				0x0B03

/*
|  OCR Export Errors
*/
#define SCCERR_OCR_UNKNOWNERR       0xC00
#define SCCERR_OCR_LICENCEFAIL      0xC01
#define SCCERR_OCR_INVALIDTECH      0xC02
#define SCCERR_OCR_INVALIDQUAL      0xC03
#define SCCERR_OCR_LOADFAILED       0xC04
#define SCCERR_OCR_INPUTFAILURE     0xC05
#define SCCERR_OCR_FILETOOBIG       0xC06

/*
|  File Access Errors
*/
#define SCCERR_BADCREDENTIALS  0xd00  /* bad credentials supplied for access to file contents */

typedef VTDWORD SCCERR;

#ifdef __cplusplus
}
#endif

#endif /* _SCCERR_H */

#endif /* USE_SCCERR_2 */
