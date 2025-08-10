//
//  AWHBPBMLAlbumImageCollectionViewCell.h
//  Medicine
//
//  Created by Visoport on 5/1/17.
//  Copyright © 2017年 Visoport. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

typedef void(^RemovePhoto)(void);

@interface AWHBPBMLAlbumImageCollectionViewCell : UICollectionViewCell
@property(nonatomic,strong)UIImageView *pImageView;
@property(nonatomic,strong)UIButton *closeButton;
@property (nonatomic, strong) PHAsset *asset;
@property (nonatomic, copy) RemovePhoto RemovePhoto;

@end
