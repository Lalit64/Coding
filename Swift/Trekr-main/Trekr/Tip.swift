//
//  Tip.swift
//  Trekr
//
//  Created by Lalit Yalamanchili on 22/12/2020.
//

import Foundation

struct Tip: Decodable {
    let text: String
    let children: [Tip]?
}
