#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
* DocuSign REST API
* The DocuSign REST API provides you with a powerful, convenient, and simple Web services API for interacting with DocuSign.
*
* OpenAPI spec version: v2
* Contact: devcenter@docusign.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "DSErrorDetails.h"


@protocol DSBulkEnvelope
@end

@interface DSBulkEnvelope : DSObject

/* Reserved: TBD [optional]
 */
@property(nonatomic) NSString* bulkRecipientRow;
/* Indicates the status of the bulk send operation. Returned values can be: * queued * processing * sent * failed [optional]
 */
@property(nonatomic) NSString* bulkStatus;
/*  [optional]
 */
@property(nonatomic) NSString* email;
/* The envelope ID of the envelope status that failed to post. [optional]
 */
@property(nonatomic) NSString* envelopeId;
/* Contains a URI for an endpoint that you can use to retrieve the envelope or envelopes. [optional]
 */
@property(nonatomic) NSString* envelopeUri;

@property(nonatomic) DSErrorDetails* errorDetails;
/*  [optional]
 */
@property(nonatomic) NSString* name;
/*  [optional]
 */
@property(nonatomic) NSString* submittedDateTime;
/*  Used to identify an envelope. The id is a sender-generated value and is valid in the DocuSign system for 7 days. It is recommended that a transaction ID is used for offline signing to ensure that an envelope is not sent multiple times. The `transactionId` property can be used determine an envelope's status (i.e. was it created or not) in cases where the internet connection was lost before the envelope status was returned. [optional]
 */
@property(nonatomic) NSString* transactionId;

@end
