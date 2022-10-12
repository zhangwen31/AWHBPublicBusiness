//
//  AWHBPBSearchTeamView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/2/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBSelectTeamBlock)(NSString *string,NSString *teamIName);
@interface AWHBPBSearchTeamView : UIView
@property(nonatomic,copy)AWHBPBSelectTeamBlock selectTeamBlock;
@end

NS_ASSUME_NONNULL_END
