///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMTeamFolderAccessError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamFolderAccessError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMTeamFolderAccessError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMTeamFolderAccessErrorTag` enum type represents the possible tag
/// states with which the `DBTEAMTeamFolderAccessError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMTeamFolderAccessErrorTag){
    /// The team folder ID is invalid.
    DBTEAMTeamFolderAccessErrorInvalidTeamFolderId,

    /// The authenticated app does not have permission to manage that team
    /// folder.
    DBTEAMTeamFolderAccessErrorNoAccess,

    /// (no description).
    DBTEAMTeamFolderAccessErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMTeamFolderAccessErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "invalid_team_folder_id".
///
/// Description of the "invalid_team_folder_id" tag state: The team folder ID is
/// invalid.
///
/// @return An initialized instance.
///
- (instancetype)initWithInvalidTeamFolderId;

///
/// Initializes union class with tag state of "no_access".
///
/// Description of the "no_access" tag state: The authenticated app does not
/// have permission to manage that team folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithNoAccess;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "invalid_team_folder_id".
///
/// @return Whether the union's current tag state has value
/// "invalid_team_folder_id".
///
- (BOOL)isInvalidTeamFolderId;

///
/// Retrieves whether the union's current tag state has value "no_access".
///
/// @return Whether the union's current tag state has value "no_access".
///
- (BOOL)isNoAccess;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMTeamFolderAccessError` union.
///
@interface DBTEAMTeamFolderAccessErrorSerializer : NSObject

///
/// Serializes `DBTEAMTeamFolderAccessError` instances.
///
/// @param instance An instance of the `DBTEAMTeamFolderAccessError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderAccessError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMTeamFolderAccessError *)instance;

///
/// Deserializes `DBTEAMTeamFolderAccessError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderAccessError` API object.
///
/// @return An instantiation of the `DBTEAMTeamFolderAccessError` object.
///
+ (DBTEAMTeamFolderAccessError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
