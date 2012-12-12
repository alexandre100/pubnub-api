//
//  PNBaseRequest.h
//  pubnub
//
//  Base request class which will allow to
//  serialize specified data into format
//  which will be sent over socket connection.
//
//
//  Created by Sergey Mamontov on 12/12/12.
//
//

#import <Foundation/Foundation.h>


@interface PNBaseRequest : NSObject


#pragma mark - Instance methods

/**
 * Return resouce path which will be used
 * in serialized HTTP header to specify
 * requested resource path:
 * GET {resource_path} HTTP/1.1
 */
- (NSString *)resourcePath;


/**
 * Retrieve serialized request message
 * which is ready to be sent
 */
- (id)serializedMessage;

#pragma mark -


@end