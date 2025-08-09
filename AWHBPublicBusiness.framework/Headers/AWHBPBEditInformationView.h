//
//  AWHBPBEditInformationView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/3/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBEditInformationView : UIView

@property (nonatomic, copy) void (^selectMenuBlock)(void);

- (void)requestSettingConfigSave;
/**
 * 默认模式
 */
- (void)setupDefultMode;
/**
 * 维护模式
 */
- (void)setupMaintenanceMode;
/**
 * 监控模式
 */
- (void)setupMonitorMode;

@end

NS_ASSUME_NONNULL_END
