//
//  AWHBPBSelectChannelViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/3/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^SelectChannelNameBlock)(NSString *channel);
@interface AWHBPBSelectChannelViewController : UIViewController

@property (nonatomic, strong) NSArray<NSString *> *dataArray;

@property (nonatomic, copy) SelectChannelNameBlock selectChannelNameBlock;

@end

NS_ASSUME_NONNULL_END
