//
//  ZDKComment.h
//  ZendeskSDK
//
//  Created by Zendesk on 13/06/2014.
//  Copyright (c) 2014 Zendesk. All rights reserved.
//
#import <Foundation/Foundation.h>

/**
 * A comment on a Zendesk request.
 */
@interface ZDKComment : NSObject

/**
 * The id of this comment in Zendesk.
 */
@property (nonatomic, readonly) NSNumber *commentId;

/**
 * The comment body/text.
 */
@property (nonatomic, strong) NSString *body;

/**
 * The Zendesk user id of the author.
 */
@property (nonatomic, strong) NSNumber *authorId;

/**
 * The timestmp fpr the creation of this comment.
 */
@property (nonatomic, strong) NSDate *createdAt;


/**
 * Initialise the model object with the account details ands the dispatcher to be used for requests.
 *
 * @param dictionary the dictionary generated from the API json
 */
- (instancetype) initWithDictionary:(NSDictionary*)dictionary;


@end
