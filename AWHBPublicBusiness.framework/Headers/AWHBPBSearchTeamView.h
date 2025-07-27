//
//  AWHBPBSearchTeamView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/2/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBSearchTeamBlock)(NSString *string,NSString *teamIName);
@interface AWHBPBSearchTeamView : UIView
@property(nonatomic,copy)AWHBPBSearchTeamBlock selectTeamBlock;
@end

NS_ASSUME_NONNULL_END
