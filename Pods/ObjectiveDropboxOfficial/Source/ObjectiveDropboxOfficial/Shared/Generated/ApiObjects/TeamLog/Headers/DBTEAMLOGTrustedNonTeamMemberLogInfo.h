///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"
#import "DBTEAMLOGUserLogInfo.h"

@class DBTEAMLOGTeamLogInfo;
@class DBTEAMLOGTrustedNonTeamMemberLogInfo;
@class DBTEAMLOGTrustedNonTeamMemberType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TrustedNonTeamMemberLogInfo` struct.
///
/// User that is not a member of the team but considered trusted.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTrustedNonTeamMemberLogInfo : DBTEAMLOGUserLogInfo <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Indicates the type of the member of a trusted team.
@property (nonatomic, readonly) DBTEAMLOGTrustedNonTeamMemberType *trustedNonTeamMemberType;

/// Details about this useru2019s trusted team.
@property (nonatomic, readonly, nullable) DBTEAMLOGTeamLogInfo *team;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param trustedNonTeamMemberType Indicates the type of the member of a
/// trusted team.
/// @param accountId User unique ID. Might be missing due to historical data
/// gap.
/// @param displayName User display name. Might be missing due to historical
/// data gap.
/// @param email User email address. Might be missing due to historical data
/// gap.
/// @param team Details about this useru2019s trusted team.
///
/// @return An initialized instance.
///
- (instancetype)initWithTrustedNonTeamMemberType:(DBTEAMLOGTrustedNonTeamMemberType *)trustedNonTeamMemberType
                                       accountId:(nullable NSString *)accountId
                                     displayName:(nullable NSString *)displayName
                                           email:(nullable NSString *)email
                                            team:(nullable DBTEAMLOGTeamLogInfo *)team;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param trustedNonTeamMemberType Indicates the type of the member of a
/// trusted team.
///
/// @return An initialized instance.
///
- (instancetype)initWithTrustedNonTeamMemberType:(DBTEAMLOGTrustedNonTeamMemberType *)trustedNonTeamMemberType;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TrustedNonTeamMemberLogInfo` struct.
///
@interface DBTEAMLOGTrustedNonTeamMemberLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGTrustedNonTeamMemberLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGTrustedNonTeamMemberLogInfo`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTrustedNonTeamMemberLogInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGTrustedNonTeamMemberLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGTrustedNonTeamMemberLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTrustedNonTeamMemberLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGTrustedNonTeamMemberLogInfo`
/// object.
///
+ (DBTEAMLOGTrustedNonTeamMemberLogInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
