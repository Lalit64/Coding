//
//  ContentView.swift
//  Trekr
//
//  Created by Lalit Yalamanchili on 22/12/2020.
//

import SwiftUI

struct ContentView: View {
    let location: Location
    
    var body: some View {
            ScrollView {
                Image(location.heroPicture)
                    .resizable()
                    .scaledToFit()

                Text(location.name)
                    .font(.largeTitle)
                    .bold()
                    .multilineTextAlignment(.center)

                Text(location.country)
                    .font(.title)
                    .foregroundColor(.secondary)

                Text(location.description)
                    .padding(.horizontal)

                Text("About " + location.country)
                    .font(.title3)
                    .bold()
                    .padding(.top)

                Text(location.more)
                    .padding(.horizontal)
                
               
                
                if location.id ==  1 {
                    Link(destination: URL(string: "https://www.galileoxp.com")!, label: {
                        Text("Galileo")
                            .bold()
                            .padding()
                            .frame(width: 200, height: 50, alignment: .center)
                            .foregroundColor(.white)
                            .background(Color.accentColor)
                            .cornerRadius(10)
                            .font(.system(size: 25))
                    })
                        .padding()
                } else if location.id ==  12 {
                    Link(destination: URL(string: "https://www.galileoxp.com")!, label: {
                        Text("Galileo")
                            .bold()
                            .padding()
                            .frame(width: 200, height: 50, alignment: .center)
                            .foregroundColor(.white)
                            .background(Color.accentColor)
                            .cornerRadius(10)
                            .font(.system(size: 25))
                    })
                        .padding()
                }
                
                    
            }
            .navigationTitle(location.name)
        }

    }

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        NavigationView {
            ContentView(location: Location.example)
        }
    }
}
