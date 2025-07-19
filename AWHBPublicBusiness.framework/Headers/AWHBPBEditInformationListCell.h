//
//  AWHBPBEditInformationListCell.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/6/4.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBBAppGpsColumnModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBEditInformationListCell : UITableViewCell

@property (nonatomic, strong) AWHBBBAppGpsColumnModel *model;

@property (nonatomic, strong) NSString *title;

@property (nonatomic, assign)  BOOL isOpen;

@property (nonatomic, assign)  BOOL isHiddenSwitch;

@property (nonatomic, copy) void (^selectClick)(BOOL isOpen, NSString *title, AWHBBBAppGpsColumnModel *model);

@end

NS_ASSUME_NONNULL_END
