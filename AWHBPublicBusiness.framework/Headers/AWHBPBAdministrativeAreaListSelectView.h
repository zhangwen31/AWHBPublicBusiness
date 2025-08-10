//
//  AWHBPBAdministrativeAreaListSelectView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/30.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBAdministrativeDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAdministrativeAreaListSelectView : UIView

@property (nonatomic, strong) AWHBPBAdministrativeDataModel *model;

@property (nonatomic, copy) void (^changeDataBlock)(void);

@property (nonatomic, strong, readonly) UITableView *tableView;

@end

NS_ASSUME_NONNULL_END
