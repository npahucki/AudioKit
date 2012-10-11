//
//  OCSNoteProperty.h
//  OCS iPad Examples
//
//  Created by Aurelius Prochazka on 9/22/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSProperty.h"

/** Note properties are properties of an instrument that are defined
 per each note generated by an instrument.
 */

@class OCSNote;

@interface OCSNoteProperty : OCSProperty

@property (nonatomic, strong) OCSNote *note;
@property (assign) int pValue;

@end