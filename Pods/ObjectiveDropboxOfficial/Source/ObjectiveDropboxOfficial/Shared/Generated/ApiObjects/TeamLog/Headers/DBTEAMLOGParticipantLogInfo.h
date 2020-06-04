///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGGroupLogInfo;
@class DBTEAMLOGParticipantLogInfo;
@class DBTEAMLOGUserLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ParticipantLogInfo` union.
///
/// A user or group
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGParticipantLogInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGParticipantLogInfoTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGParticipantLogInfo` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGParticipantLogInfoTag){
    /// A user with a Dropbox account.
    DBTEAMLOGParticipantLogInfoUser,

    /// Group details.
    DBTEAMLOGParticipantLogInfoGroup,

    /// (no description).
    DBTEAMLOGParticipantLogInfoOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGParticipantLogInfoTag tag;

/// A user with a Dropbox account. @note Ensure the `isUser` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMLOGUserLogInfo *user;

/// Group details. @note Ensure the `isGroup` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMLOGGroupLogInfo *group;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "user".
///
/// Description of the "user" tag state: A user with a Dropbox account.
///
/// @param user A user with a Dropbox account.
///
/// @return An initialized instance.
///
- (instancetype)initWithUser:(DBTEAMLOGUserLogInfo *)user;

///
/// Initializes union class with tag state of "group".
///
/// Description of the "group" tag state: Group details.
///
/// @param group Group details.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroup:(DBTEAMLOGGroupLogInfo *)group;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "user".
///
/// @note Call this method and ensure it returns true before accessing the
/// `user` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "user".
///
- (BOOL)isUser;

///
/// Retrieves whether the union's current tag state has value "group".
///
/// @note Call this method and ensure it returns true before accessing the
/// `group` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "group".
///
- (BOOL)isGroup;

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
/// The serialization class for the `DBTEAMLOGParticipantLogInfo` union.
///
@interface DBTEAMLOGParticipantLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGParticipantLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGParticipantLogInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGParticipantLogInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGParticipantLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGParticipantLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGParticipantLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGParticipantLogInfo` object.
///
+ (DBTEAMLOGParticipantLogInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
