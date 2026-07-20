# mosaic-x3 — Journal Export

- Exported at: 2026-07-19T17:18:08Z
- Project ID: 4171
- Entries: 16

## Entry 1
- ID: 11157
- Author: shush
- Created At: 2026-06-02T16:12:44Z

### Content

I started a new project, **mosaic-x3**. 

before i explain what it is, I'd like to share some context. i feel like my walls are too empty and there's no decor going on. I was like what is a nice thing i could possibly have framed on my wall. and imagine what if I had a github contribution graph grid which can go on my wall as a decorative item? not only it would look clean but also we can use esp32 to make it dynamic and actually update in realtime everyday... 

so i started the project, did some research about what kind of things to use. one of the key components would be a diffuser so the thing doesn't appear as if its just some leds, we need to have a nice diffusing system to make it appear like one big pixel.

this frame will be roughly 55x10cm.. basically a long horizontal strip. each block would be about 1cm and will have 4 levels of light to indicate contribution density for that specific day.

i decided to use opal white polyacrylic for the diffusing layer and all the stuff left for now is to prepare the schematics, and make sure the thing works.

another important thing is to make sure the power delivery works well. otherwise this could go very very wrong.. and nothing would work properly

i dont have any image for now, but i've started work on schematics and this is what i have
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjU2MjcsInB1ciI6ImJsb2JfaWQifX0=--8823cfb8a9b5629f5de03ff204a42d72c99f2aea/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/85a795ac-3189-4fa0-8f2a-8185a045da4e/video.mp4
- https://lookout.hackclub.com/api/media/e5051e7e-0684-4efa-a4b6-a9e957895b8a/video.mp4
- https://lookout.hackclub.com/api/media/1fbc2373-02df-4b9f-8a0f-9db1d6e7108c/video.mp4

## Entry 2
- ID: 11400
- Author: shush
- Created At: 2026-06-03T16:15:56Z

### Content

finished with the schematic designs for my project.. 
while doing the schematic desgins, I also realised that 100LEDs/meter strip would be really hard to find, i did see one listing on amazon but it was simply too expensive. I ended up going for a different layout ie- i bumped down the pixels from ~360 something to 180 now and the board will only display data for upto 6 months. this means smaller overall frame, easier to 3d print and connect everything, it wont feel like a super long horizontal stick, and we can just use the 60LEDs/meter strip which is affordable + easy to source.

other than that, all good. the idea is coming along well. 

next part is assigning footprints, doing the PCB design, doing the CAD work and all that. 

this is how the schematic sheet looks like:
  
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjY0MzYsInB1ciI6ImJsb2JfaWQifX0=--8e286eaa2d30c4e60d055fab670efbc076474df5/image.png)

YUM! 


### Recording Links

- https://lookout.hackclub.com/api/media/554fdd7f-e1e7-4b03-984e-e18822b59837/video.mp4
- https://lookout.hackclub.com/api/media/fd00c662-95a2-4b93-8a0e-c1e99a039f95/video.mp4
- https://lookout.hackclub.com/api/media/48f4d919-37f9-4ec4-b954-3882f302423a/video.mp4

## Entry 3
- ID: 11467
- Author: shush
- Created At: 2026-06-03T20:44:41Z

### Content

welp okay so we're having some issues. before i start:
- assigned footprints to all the components, had to figure out which ones will be the best
- did basic pcb design, decided on the shape & positioning of my pcb
- placed power delivery ports and usb c port.. 

HOWEVER,
one big problem is that a barrel jack is HUGE. like it takes 	
~14 × 9 mm body, plus keepout space. height is around 11mm which is A LOT. i want to keep my board minimal and thin. so this does not work out very well..

i need to reconsider power options and eventually need to find something good which can fit my requirements.

this is what the pcb designs are looking like rn

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjY2NjgsInB1ciI6ImJsb2JfaWQifX0=--41f1452bc5fcb08e5558dbd24c8ebae87f63bdc5/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/49007bbc-f739-4d2b-a142-77694ec53e46/video.mp4
- https://lookout.hackclub.com/api/media/2279121e-5a5a-4898-ab92-ae51b82c66fc/video.mp4

## Entry 4
- ID: 11743
- Author: shush
- Created At: 2026-06-05T00:34:27Z

### Content

hey so ive been working on trying to make my project feel as polished as ever. mainly due to these reasons:
- this is something that i see as a product rather than a project
- i really really want this to be something people would take interest in when they see it in my space
- it's something that's gonna stick with me for a while

i've always been passionate about wanting to make polished products but hardware is something that lives with me. something i can touch feel and play around with. "it's real" 

over this lapse and time, i've been working on the following things: 
- i want to make sure the board remains as thin as possible
- the pcb is designed to be side mounted on the artifact.. it's going to be 2.1cm wide and i could possibly pass off that area as some padding to make the product look even more neat
- the weight distribution needs to be right
- the pcb should be designed such that it's easy to mount on the board itself and should be compatible for future updates

bleh
i didn't expect this project to grow on me as much as it did, but it's nice to see and i feel more passionate than ever to work on this
YAHOOO!

mandatory attached image:
[the pcb getting designed to go on very left of the frame]
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjczNjcsInB1ciI6ImJsb2JfaWQifX0=--b3002372e4244609f1310512c72bf018753c2275/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/828bcfa5-f456-4f89-b0da-63a00f2254f6/video.mp4
- https://lookout.hackclub.com/api/media/19e446a5-5e59-4529-a544-7c25d2fa9216/video.mp4

## Entry 5
- ID: 11959
- Author: shush
- Created At: 2026-06-05T23:25:40Z

### Content

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6Mjc5NzQsInB1ciI6ImJsb2JfaWQifX0=--345f28e070dc13d78ca88960176c8fd909d7b7a2/image.png)

hey so i updated the power route to include a MOSFET so the switch works better and i finalized the design for pcb and next steps are just placing everything and doing the routing. im expecting to be over with this after my next journal an we can start worrying about LED parts & CAD design

### Recording Links

- https://lookout.hackclub.com/api/media/76604863-1fc0-42a7-b24d-bffa02add652/video.mp4

## Entry 6
- ID: 12556
- Author: shush
- Created At: 2026-06-08T18:18:19Z

### Content

i finallyyy finished my pcb layout. took me a lot of researching components to study what they do and stuff but now we have the placement sorted. 

next steps are maybe some placement fixing? minor ones
and routing. 

im too tired + need to celebrate kartikey's birthday (my roommate) in 10 mins so gonna log off for today. byebye

update pictures: 
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6Mjk1NTEsInB1ciI6ImJsb2JfaWQifX0=--c67426286057382674f2df7f9273f0f1497b396c/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6Mjk1NTMsInB1ciI6ImJsb2JfaWQifX0=--59cb30cd7b477733d0e8b2cb990a6a5a76587cd3/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/a09e569f-8e6e-4f6a-9702-772d24a7e512/video.mp4

## Entry 7
- ID: 12846
- Author: shush
- Created At: 2026-06-09T18:51:51Z

### Content

i fixed some placement issues with capacitors & resistors. once that was done, i started working on routing. this board was pretty easy compared to the ones i have worked on before.. now the next steps are applying some silkscreen and doing the ground wires.

BUT WAIT!! i saw a bunch of DRC errors so im prolly gonna fix that first before i move forward with anything :sob:

pcb w/ routing:
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzAxNjgsInB1ciI6ImJsb2JfaWQifX0=--759b1dcf3e6d8185b310c15932c70bfc772a3068/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/1bef8ac0-e259-43e2-a325-c941bf62d8da/video.mp4

## Entry 8
- ID: 12894
- Author: shush
- Created At: 2026-06-10T02:22:41Z

### Content

wohooo big productive hours. i genuinely could have done 2 more if fallout didn't go down. but that's okay.

anyways so here's what happened:

- i ran into a bunch of drc errors, kept fixing them back and forth
- i added one rgb 5mm status indicator LED which we can use to show signify various events happening. wired it up and allat
- drc made me cry again
- i finally learnt how to do ground layer fill. it felt really confusing in earlier projects
- i added a qr code, some project details & also made sure all the references are clearly visible in front silkscreen
- i added a cool border in back silkscreen

whooo!

(i tried adding an image on the back but that did not work very well)

anyways, here's how the final product looks:
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzAzMDUsInB1ciI6ImJsb2JfaWQifX0=--4a2ad8967cb2b8aa367fd8c6b109db916faf1b81/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzAzMDYsInB1ciI6ImJsb2JfaWQifX0=--8ad2e4be079d7c34f0f5774d2199f4d9979a2000/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/eb70a2f7-e69a-4b47-9f16-6a7fbaa9dac5/video.mp4
- https://lookout.hackclub.com/api/media/af3effd1-d4f2-4372-96e9-af26daa6b114/video.mp4

## Entry 9
- ID: 13283
- Author: shush
- Created At: 2026-06-11T18:24:16Z

### Content

Okay, I was done with all the PCB work and it was time to start with CAD. however the one problem I had is, I don't have any experience in using fusion or such so i decided to take some assistance from my friends + AI and spent quite a lot of time trying to figure out the UI and stuff myself. However, that's done and good now. I don't understand everything but I'm now aware of how basics work.

I even made a base for project with the current dimensions. I need to figure out how I can make a proper looking board now. Another thing I need to research is how will I get the diffusion effect working on the front of the board. 

anyways, here is how the CAD looks:
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzE0MTgsInB1ciI6ImJsb2JfaWQifX0=--61911ead920967f7dd32c4d13d85466655a5108b/image.png)


planning to do more in depth work tomorrow, until then byebye

### Recording Links

- https://lookout.hackclub.com/api/media/84365d6b-e233-4e84-a251-47182bebb2f2/video.mp4
- https://lookout.hackclub.com/api/media/532e6543-feec-4a36-83ad-19bca42878d3/video.mp4
- https://lookout.hackclub.com/api/media/1464e322-9264-40b4-bb2e-bbd9320ceaa1/video.mp4

## Entry 10
- ID: 13357
- Author: shush
- Created At: 2026-06-12T03:01:06Z

### Content

Okay okay okay I am starting to understand how CAD works. I spent quite a lot of time trying to get the alignment and dimensions perfect but it's all looking neat now. I know more fusion shortcuts than ever before.. at one point i was also considering going for a panel mount switch but it felt too much hassle so i decided that i will make the wall around the switch thinner instead. that will surely help.

And this is the CAD case I created:
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzE2MzUsInB1ciI6ImJsb2JfaWQifX0=--6c7702400d2a43d592c203f4d22e4b6c2600bbe2/image.png)

It's just an open container for now. but need to do a lot of changes to it

### Recording Links

- https://lookout.hackclub.com/api/media/c46758d2-e319-4e3a-919c-0fa13e3eb978/video.mp4

## Entry 11
- ID: 13689
- Author: shush
- Created At: 2026-06-13T10:21:35Z

### Content

so what happened is, it's really hard to find a big 3d printer here in Inda. I'm new to cad and still figuring out things so I dont really wanna involve myself with breaking the part into multiple pieces that's too much work. I now decided to shrink the board even further. down to 7x12 grid :(

i will make a bigger board next time maybe

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzI0MzgsInB1ciI6ImJsb2JfaWQifX0=--0db6d698a001c3b43f46f558bb38d9548265bd51/image.png)
_the new smaller board dimensions_

### Recording Links

- https://lookout.hackclub.com/api/media/f2cc8d26-db23-47f4-a3b7-bc000399d19e/video.mp4

## Entry 12
- ID: 13905
- Author: shush
- Created At: 2026-06-14T07:03:16Z

### Content

i did the fallout event this weekend and 4 of us gathered to work on our projects.

what I did was, I finally made a cad case for my thing. right now, the state it is in right now is like a good first iteration of what i wanna have as a final product. 
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzMwMTEsInB1ciI6ImJsb2JfaWQifX0=--bbd59a4e627b51e93e1c9aac01a291ef4d95451a/image.png)



it's still not ready tho, here are the things we need to do:

- first of all, fix the positioning of the pcb and output ports so we can do wiring and not have it blocked by a wall right after. look at this image:
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzMwMTAsInB1ciI6ImJsb2JfaWQifX0=--a81217a2f69329a91a9195e8da166807f194d226/image.png)

- next, we need to polish the area on sides to thin it out so the switches are easy to toggle and plugging usb c and the panel switch actually works

- need to figure out a diffusing layer for the very top

### Recording Links

- https://lookout.hackclub.com/api/media/d262158b-95fa-415b-867c-13a41d8fa451/video.mp4

## Entry 13
- ID: 14255
- Author: shush
- Created At: 2026-06-15T15:18:00Z

### Content

okay so one big issue I was facing is that, there was barely any space for the wires to go in the connectors. IT was getting blocked by CAD because of bad PCB design and not enough empty space.

I decided to take some time out and did a lot of changes in the PCB components placement. 

- the button now sticks out more for easier accessiblity
- the usb c also sticks out because the CAD case might be thick
- MAIN THING, the connectors now have better placement and there's some spacing for the wires

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzM5MTgsInB1ciI6ImJsb2JfaWQifX0=--4753bfb7ed86b9973c59218c2997f40699fcb8d1/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzM5MjEsInB1ciI6ImJsb2JfaWQifX0=--65417285436dd5bbe461d9025517bef6f32da456/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/477ae231-ecfc-4e13-bd30-f1904f318385/video.mp4
- https://lookout.hackclub.com/api/media/2e05e14a-665e-4e82-8118-521b109560d9/video.mp4
- https://lookout.hackclub.com/api/media/fbb4cf2b-c184-47a8-8809-a034db81a137/video.mp4

## Entry 14
- ID: 14354
- Author: shush
- Created At: 2026-06-16T01:08:20Z

### Content

I updated the PCB component placements, fixed wiring, updated footprints, cleaned up some design + shrank the board a lil on the height

other than that, i updated my CAD to add a pcb mount so it doesn't more + made some cutouts for the switch and USB-C port. im learning a lot

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzQxNzEsInB1ciI6ImJsb2JfaWQifX0=--f8c497b660b7a7767ae28af3c407e2d80b6b7735/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzQxNzIsInB1ciI6ImJsb2JfaWQifX0=--7d5dc47dd39d294ca9a3bb77af29f7b15405e7b5/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/c74d583e-ab0b-448e-a354-f52ca860af52/video.mp4

## Entry 15
- ID: 14662
- Author: shush
- Created At: 2026-06-17T01:24:26Z

### Content

this was one long timelapse. I did the following things:

- I did some research about panel mount dc barrel jacks, found one, downloaded it, applied it on the board.. didn't fit well.. did some research made some better holes
- Turns out, we dont have enoguh space near that area on the PCB so decided to rearrange pcb components yet again. fixed some wiring issues as well
- Once done, brought it back into fusion, and used a datasheet to create a hole for it.
- turns out, since i did some rearranging on PCB, other cutouts were messed up so re-did that
- made cutouts under the grid for passing the LED strip
- studied on how the LED wiring is gonna work
- turns out, the power jack i selected is hard to find + i cannot find a 5A version which can power my board well.
- usb c is not an option because that's too much work + I would need to give power in a very controlled manner...

this is how the design is looking:
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzQ3OTksInB1ciI6ImJsb2JfaWQifX0=--7d7692a901a8d85d5b571bb220b1970235a19f8c/image.png)

### Recording Links

- https://lookout.hackclub.com/api/media/4709a35a-1801-4609-b8c2-a3190d9a1dd3/video.mp4

## Entry 16
- ID: 15030
- Author: shush
- Created At: 2026-06-18T17:34:59Z

### Content

did some more cad restructuring and added screw mounts to make sure my pcb does not lift itself. i only added 2 screws and im gonna assume thats enough and fine because i already have pcb side mount and top bottom mount in place
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzU3ODEsInB1ciI6ImJsb2JfaWQifX0=--a092e7242285ab8cc78d8555bcae7f720957715b/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzU3ODIsInB1ciI6ImJsb2JfaWQifX0=--13d5e2a0e2dd32999263c2439137f9f087bd83f5/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/bead555d-37ea-477b-8064-fd14e9c968e8/video.mp4
- https://lookout.hackclub.com/api/media/a1d29f8f-0cf0-4f11-8c37-b4d6894c0e38/video.mp4
