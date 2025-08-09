//
//  AWHBPBSelectAdministrativeAreaListCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/30.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBAdministrativeProvinceDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectAdministrativeAreaListCell : UITableViewCell

@property (nonatomic, strong) AWHBPBAdministrativeProvinceDataModel *model;

@property (nonatomic, copy) void (^changeDataBlock)(void);

@property (nonatomic, copy) void (^refreshCellLayoutBlock)(void);

@end

NS_ASSUME_NONNULL_END
