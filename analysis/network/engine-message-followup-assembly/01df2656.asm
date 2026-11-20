
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01df2656 <.text+0xf1656>:
 1df2656:	55                   	push   ebp
 1df2657:	8b ec                	mov    ebp,esp
 1df2659:	81 ec 04 04 00 00    	sub    esp,0x404
 1df265f:	8d 45 0c             	lea    eax,[ebp+0xc]
 1df2662:	89 85 fc fb ff ff    	mov    DWORD PTR [ebp-0x404],eax
 1df2668:	8b 8d fc fb ff ff    	mov    ecx,DWORD PTR [ebp-0x404]
 1df266e:	51                   	push   ecx
 1df266f:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1df2672:	52                   	push   edx
 1df2673:	68 00 04 00 00       	push   0x400
 1df2678:	8d 85 00 fc ff ff    	lea    eax,[ebp-0x400]
 1df267e:	50                   	push   eax
 1df267f:	e8 2a ff 07 00       	call   0x1e725ae
 1df2684:	83 c4 10             	add    esp,0x10
 1df2687:	c7 85 fc fb ff ff 00 	mov    DWORD PTR [ebp-0x404],0x0
 1df268e:	00 00 00 
 1df2691:	83 3d 94 9f 49 02 00 	cmp    DWORD PTR ds:0x2499f94,0x0
 1df2698:	74 25                	je     0x1df26bf
 1df269a:	8d 8d 00 fc ff ff    	lea    ecx,[ebp-0x400]
 1df26a0:	51                   	push   ecx
 1df26a1:	68 e4 ef ec 01       	push   0x1ecefe4
 1df26a6:	68 20 87 ed 01       	push   0x1ed8720
 1df26ab:	e8 81 14 08 00       	call   0x1e73b31
 1df26b0:	83 c4 0c             	add    esp,0xc
 1df26b3:	6a 02                	push   0x2
 1df26b5:	68 a0 c1 7f 02       	push   0x27fc1a0
 1df26ba:	e8 fd 0a 08 00       	call   0x1e731bc
 1df26bf:	c7 05 94 9f 49 02 01 	mov    DWORD PTR ds:0x2499f94,0x1
 1df26c6:	00 00 00 
 1df26c9:	83 3d 20 f3 51 02 00 	cmp    DWORD PTR ds:0x251f320,0x0
 1df26d0:	74 19                	je     0x1df26eb
 1df26d2:	83 3d 44 d9 50 02 00 	cmp    DWORD PTR ds:0x250d944,0x0
 1df26d9:	74 10                	je     0x1df26eb
 1df26db:	8d 95 00 fc ff ff    	lea    edx,[ebp-0x400]
 1df26e1:	52                   	push   edx
 1df26e2:	ff 15 44 d9 50 02    	call   DWORD PTR ds:0x250d944
 1df26e8:	83 c4 04             	add    esp,0x4
 1df26eb:	8d 85 00 fc ff ff    	lea    eax,[ebp-0x400]
 1df26f1:	50                   	push   eax
 1df26f2:	68 e8 ef ec 01       	push   0x1ecefe8
 1df26f7:	e8 84 23 fe ff       	call   0x1dd4a80
 1df26fc:	83 c4 08             	add    esp,0x8
 1df26ff:	83 3d 38 de 50 02 00 	cmp    DWORD PTR ds:0x250de38,0x0
 1df2706:	74 1d                	je     0x1df2725
 1df2708:	6a 10                	push   0x10
 1df270a:	68 0c f0 ec 01       	push   0x1ecf00c
 1df270f:	8d 8d 00 fc ff ff    	lea    ecx,[ebp-0x400]
 1df2715:	51                   	push   ecx
 1df2716:	6a 00                	push   0x0
 1df2718:	ff 15 44 b4 e8 01    	call   DWORD PTR ds:0x1e8b444
 1df271e:	6a ff                	push   0xffffffff
 1df2720:	e8 81 eb 07 00       	call   0x1e712a6
 1df2725:	8d 95 00 fc ff ff    	lea    edx,[ebp-0x400]
 1df272b:	52                   	push   edx
 1df272c:	e8 84 00 00 00       	call   0x1df27b5
 1df2731:	83 c4 04             	add    esp,0x4
 1df2734:	ff 15 8c b3 e8 01    	call   DWORD PTR ds:0x1e8b38c
 1df273a:	50                   	push   eax
 1df273b:	ff 15 90 b3 e8 01    	call   DWORD PTR ds:0x1e8b390
 1df2741:	6a 10                	push   0x10
 1df2743:	68 2c f0 ec 01       	push   0x1ecf02c
 1df2748:	8d 85 00 fc ff ff    	lea    eax,[ebp-0x400]
 1df274e:	50                   	push   eax
 1df274f:	6a 00                	push   0x0
 1df2751:	ff 15 44 b4 e8 01    	call   DWORD PTR ds:0x1e8b444
 1df2757:	e8 b5 4f 00 00       	call   0x1df7711
 1df275c:	6a ff                	push   0xffffffff
 1df275e:	e8 43 eb 07 00       	call   0x1e712a6
 1df2763:	8b e5                	mov    esp,ebp
 1df2765:	5d                   	pop    ebp
 1df2766:	c3                   	ret
