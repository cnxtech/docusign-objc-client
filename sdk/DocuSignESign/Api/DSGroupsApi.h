#import <Foundation/Foundation.h>
#import "DSBrandsRequest.h"
#import "DSBrandsResponse.h"
#import "DSErrorDetails.h"
#import "DSGroupInformation.h"
#import "DSUserInfoList.h"
#import "DSUsersResponse.h"
#import "DSApi.h"

/**
* DocuSign REST API
* The DocuSign REST API provides you with a powerful, convenient, and simple Web services API for interacting with DocuSign.
*
* OpenAPI spec version: v2
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/










@interface DSGroupsApi_ListGroupUsersOptions : DSObject
/*
 * count Number of records to return. The number must be greater than 1 and less than or equal to 100. 
 */
@property NSString* count;
/*
 * startPosition Starting value for the list.
 */
@property NSString* startPosition;

@end



@interface DSGroupsApi_ListGroupsOptions : DSObject
/*
 * count Number of records to return. The number must be greater than 1 and less than or equal to 100.
 */
@property NSString* count;
/*
 * groupName Filters the groups returned by the group name or a sub-string of group name.
 */
@property NSString* groupName;
/*
 * groupType 
 */
@property NSString* groupType;
/*
 * searchText 
 */
@property NSString* searchText;
/*
 * startPosition Starting value for the list.
 */
@property NSString* startPosition;

@end





@interface DSGroupsApi: NSObject <DSApi>

extern NSString* kDSGroupsApiErrorDomain;
extern NSInteger kDSGroupsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Creates one or more groups for the account.
/// Creates one or more groups for the account.  Groups can be used to help manage users by associating users with a group. You can associate a group with a Permission Profile, which sets the user permissions for users in that group without having to set the `userSettings` property for each user. You are not required to set Permission Profiles for a group, but it makes it easier to manage user permissions for a large number of users. You can also use groups with template sharing to limit user access to templates.
///
/// @param accountId The external account number (int) or account ID Guid.
/// @param groupInformation  (optional)

///  code:201 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSGroupInformation*
-(NSNumber*) createGroupsWithAccountId:
(NSString*) accountId 
 groupInformation:(DSGroupInformation*) groupInformation

 completionHandler: (void (^)(DSGroupInformation* output, NSError* error)) handler;

/// Deletes brand information from the requested group.
/// Deletes brand information from the requested group.
///
/// @param accountId The external account number (int) or account ID Guid./// @param groupId The ID of the group being accessed.
/// @param brandsRequest  (optional)

///  code:200 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSBrandsResponse*
-(NSNumber*) deleteBrandsWithAccountId:
(NSString*) accountId  groupId:(NSString*) groupId 
 brandsRequest:(DSBrandsRequest*) brandsRequest

 completionHandler: (void (^)(DSBrandsResponse* output, NSError* error)) handler;

/// Deletes one or more users from a gro
/// Deletes one or more users from a group. 
///
/// @param accountId The external account number (int) or account ID Guid./// @param groupId The ID of the group being accessed.
/// @param userInfoList  (optional)

///  code:200 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSUsersResponse*
-(NSNumber*) deleteGroupUsersWithAccountId:
(NSString*) accountId  groupId:(NSString*) groupId 
 userInfoList:(DSUserInfoList*) userInfoList

 completionHandler: (void (^)(DSUsersResponse* output, NSError* error)) handler;

/// Deletes an existing user group.
/// Deletes an existing user group.
///
/// @param accountId The external account number (int) or account ID Guid.
/// @param groupInformation  (optional)

///  code:200 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSGroupInformation*
-(NSNumber*) deleteGroupsWithAccountId:
(NSString*) accountId 
 groupInformation:(DSGroupInformation*) groupInformation

 completionHandler: (void (^)(DSGroupInformation* output, NSError* error)) handler;

/// Gets group brand ID Information. 
/// Retrieves information about the brands associated with the requested group.
///
/// @param accountId The external account number (int) or account ID Guid./// @param groupId The ID of the group being accessed.


///  code:200 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSBrandsResponse*
-(NSNumber*) getBrandsWithAccountId:
(NSString*) accountId  groupId:(NSString*) groupId 


 completionHandler: (void (^)(DSBrandsResponse* output, NSError* error)) handler;

/// Gets a list of users in a group.
/// Retrieves a list of users in a group.
///
/// @param accountId The external account number (int) or account ID Guid./// @param groupId The ID of the group being accessed.

/// @param DSGroupsApi_ListGroupUsersOptions Options for modifying the behavior of the function.
///  code:200 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSUsersResponse*
-(NSNumber*) listGroupUsersWithAccountId:
(NSString*) accountId  groupId:(NSString*) groupId 

 options:(DSGroupsApi_ListGroupUsersOptions*) options
 completionHandler: (void (^)(DSUsersResponse* output, NSError* error)) handler;

/// Gets information about groups associated with the account.
/// Retrieves information about groups associated with the account.
///
/// @param accountId The external account number (int) or account ID Guid.

/// @param DSGroupsApi_ListGroupsOptions Options for modifying the behavior of the function.
///  code:200 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSGroupInformation*
-(NSNumber*) listGroupsWithAccountId:
(NSString*) accountId 

 options:(DSGroupsApi_ListGroupsOptions*) options
 completionHandler: (void (^)(DSGroupInformation* output, NSError* error)) handler;

/// Adds group brand ID information to a group.
/// Adds group brand ID information to a group.
///
/// @param accountId The external account number (int) or account ID Guid./// @param groupId The ID of the group being accessed.
/// @param brandsRequest  (optional)

///  code:200 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSBrandsResponse*
-(NSNumber*) updateBrandsWithAccountId:
(NSString*) accountId  groupId:(NSString*) groupId 
 brandsRequest:(DSBrandsRequest*) brandsRequest

 completionHandler: (void (^)(DSBrandsResponse* output, NSError* error)) handler;

/// Adds one or more users to an existing group.
/// Adds one or more users to an existing group.
///
/// @param accountId The external account number (int) or account ID Guid./// @param groupId The ID of the group being accessed.
/// @param userInfoList  (optional)

///  code:200 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSUsersResponse*
-(NSNumber*) updateGroupUsersWithAccountId:
(NSString*) accountId  groupId:(NSString*) groupId 
 userInfoList:(DSUserInfoList*) userInfoList

 completionHandler: (void (^)(DSUsersResponse* output, NSError* error)) handler;

/// Updates the group information for a group.
/// Updates the group name and modifies, or sets, the permission profile for the group.
///
/// @param accountId The external account number (int) or account ID Guid.
/// @param groupInformation  (optional)

///  code:200 message:"Successful response.",
///  code:400 message:"Error encountered."
/// @return DSGroupInformation*
-(NSNumber*) updateGroupsWithAccountId:
(NSString*) accountId 
 groupInformation:(DSGroupInformation*) groupInformation

 completionHandler: (void (^)(DSGroupInformation* output, NSError* error)) handler;


@end