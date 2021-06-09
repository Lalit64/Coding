//
//  TipsView.swift
//  Trekr
//
//  Created by Lalit Yalamanchili on 22/12/2020.
//

import SwiftUI

struct TipsView: View {
    let tips: [Tip]

    init() {
        let url = Bundle.main.url(forResource: "tips", withExtension: "json")!
        let data = try! Data(contentsOf: url)
        tips = try! JSONDecoder().decode([Tip].self, from: data)
    }

    var body: some View {
        
            List(tips, id: \.text, children: \.children) { tip in
                Section{
                    if tip.children != nil {
                        Label(tip.text, systemImage: "info.circle")
                            .font(.title3)
                            .shadow(radius: 100)
                            
                    } else {
                        Text(tip.text)
                            .bold()
                    }
                    
                }
               
                
        }
            .listStyle(InsetGroupedListStyle())
            .navigationTitle("Coding Tips")
} 

struct TipsView_Previews: PreviewProvider {
    static var previews: some View {
        TipsView()
        }
    }
    
}

