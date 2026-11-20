
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01d4aa99 <.text+0x49a99>:
 1d4aa99:	55                   	push   ebp
 1d4aa9a:	8b ec                	mov    ebp,esp
 1d4aa9c:	b8 04 10 00 00       	mov    eax,0x1004
 1d4aaa1:	e8 ca 6b 12 00       	call   0x1e71670
 1d4aaa6:	56                   	push   esi
 1d4aaa7:	8d 45 0c             	lea    eax,[ebp+0xc]
 1d4aaaa:	89 85 fc ef ff ff    	mov    DWORD PTR [ebp-0x1004],eax
 1d4aab0:	8b 8d fc ef ff ff    	mov    ecx,DWORD PTR [ebp-0x1004]
 1d4aab6:	51                   	push   ecx
 1d4aab7:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d4aaba:	52                   	push   edx
 1d4aabb:	68 00 10 00 00       	push   0x1000
 1d4aac0:	8d 85 00 f0 ff ff    	lea    eax,[ebp-0x1000]
 1d4aac6:	50                   	push   eax
 1d4aac7:	e8 e2 7a 12 00       	call   0x1e725ae
 1d4aacc:	83 c4 10             	add    esp,0x10
 1d4aacf:	c7 85 fc ef ff ff 00 	mov    DWORD PTR [ebp-0x1004],0x0
 1d4aad6:	00 00 00 
 1d4aad9:	8d 8d 00 f0 ff ff    	lea    ecx,[ebp-0x1000]
 1d4aadf:	51                   	push   ecx
 1d4aae0:	68 dc 17 eb 01       	push   0x1eb17dc
 1d4aae5:	e8 cb 7c 0a 00       	call   0x1df27b5
 1d4aaea:	83 c4 08             	add    esp,0x8
 1d4aaed:	83 3d d4 60 51 02 00 	cmp    DWORD PTR ds:0x25160d4,0x0
 1d4aaf4:	74 4b                	je     0x1d4ab41
 1d4aaf6:	8d 95 00 f0 ff ff    	lea    edx,[ebp-0x1000]
 1d4aafc:	52                   	push   edx
 1d4aafd:	e8 c0 bb ff ff       	call   0x1d466c2
 1d4ab02:	83 c4 04             	add    esp,0x4
 1d4ab05:	8b f0                	mov    esi,eax
 1d4ab07:	68 80 d6 6f 02       	push   0x26fd680
 1d4ab0c:	e8 b1 bb ff ff       	call   0x1d466c2
 1d4ab11:	83 c4 04             	add    esp,0x4
 1d4ab14:	03 f0                	add    esi,eax
 1d4ab16:	81 fe 77 05 00 00    	cmp    esi,0x577
 1d4ab1c:	76 05                	jbe    0x1d4ab23
 1d4ab1e:	e8 62 0e 09 00       	call   0x1ddb985
 1d4ab23:	68 77 05 00 00       	push   0x577
 1d4ab28:	8d 85 00 f0 ff ff    	lea    eax,[ebp-0x1000]
 1d4ab2e:	50                   	push   eax
 1d4ab2f:	68 80 d6 6f 02       	push   0x26fd680
 1d4ab34:	e8 67 75 12 00       	call   0x1e720a0
 1d4ab39:	83 c4 0c             	add    esp,0xc
 1d4ab3c:	e9 92 00 00 00       	jmp    0x1d4abd3
 1d4ab41:	83 3d ec d0 d7 02 00 	cmp    DWORD PTR ds:0x2d7d0ec,0x0
 1d4ab48:	74 19                	je     0x1d4ab63
 1d4ab4a:	8d 8d 00 f0 ff ff    	lea    ecx,[ebp-0x1000]
 1d4ab50:	51                   	push   ecx
 1d4ab51:	68 e0 17 eb 01       	push   0x1eb17e0
 1d4ab56:	68 e4 17 eb 01       	push   0x1eb17e4
 1d4ab5b:	e8 c4 fe ff ff       	call   0x1d4aa24
 1d4ab60:	83 c4 0c             	add    esp,0xc
 1d4ab63:	83 3d e4 9d 3c 02 00 	cmp    DWORD PTR ds:0x23c9de4,0x0
 1d4ab6a:	75 02                	jne    0x1d4ab6e
 1d4ab6c:	eb 65                	jmp    0x1d4abd3
 1d4ab6e:	83 3d e0 d0 d7 02 00 	cmp    DWORD PTR ds:0x2d7d0e0,0x0
 1d4ab75:	75 02                	jne    0x1d4ab79
 1d4ab77:	eb 5a                	jmp    0x1d4abd3
 1d4ab79:	83 3d 80 f2 dc 02 00 	cmp    DWORD PTR ds:0x2dcf280,0x0
 1d4ab80:	75 02                	jne    0x1d4ab84
 1d4ab82:	eb 4f                	jmp    0x1d4abd3
 1d4ab84:	d9 05 ac c9 eb 01    	fld    DWORD PTR ds:0x1ebc9ac
 1d4ab8a:	d8 1d 84 c3 e8 01    	fcomp  DWORD PTR ds:0x1e8c384
 1d4ab90:	df e0                	fnstsw ax
 1d4ab92:	f6 c4 40             	test   ah,0x40
 1d4ab95:	75 2d                	jne    0x1d4abc4
 1d4ab97:	68 00 01 00 00       	push   0x100
 1d4ab9c:	8d 95 00 f0 ff ff    	lea    edx,[ebp-0x1000]
 1d4aba2:	52                   	push   edx
 1d4aba3:	68 d8 9b 07 02       	push   0x2079bd8
 1d4aba8:	e8 43 55 12 00       	call   0x1e700f0
 1d4abad:	83 c4 0c             	add    esp,0xc
 1d4abb0:	c6 05 d7 9c 07 02 00 	mov    BYTE PTR ds:0x2079cd7,0x0
 1d4abb7:	dd 05 e0 c1 7f 02    	fld    QWORD PTR ds:0x27fc1e0
 1d4abbd:	a1 e0 ac 07 02       	mov    eax,ds:0x207ace0
 1d4abc2:	d9 18                	fstp   DWORD PTR [eax]
 1d4abc4:	8d 8d 00 f0 ff ff    	lea    ecx,[ebp-0x1000]
 1d4abca:	51                   	push   ecx
 1d4abcb:	e8 ea 4d fc ff       	call   0x1d0f9ba
 1d4abd0:	83 c4 04             	add    esp,0x4
 1d4abd3:	5e                   	pop    esi
 1d4abd4:	8b e5                	mov    esp,ebp
 1d4abd6:	5d                   	pop    ebp
 1d4abd7:	c3                   	ret
 1d4abd8:	55                   	push   ebp
 1d4abd9:	8b ec                	mov    ebp,esp
 1d4abdb:	b8 04 10 00 00       	mov    eax,0x1004
 1d4abe0:	e8 8b 6a 12 00       	call   0x1e71670
 1d4abe5:	d9 05 ac c9 eb 01    	fld    DWORD PTR ds:0x1ebc9ac
 1d4abeb:	d8 1d 84 c3 e8 01    	fcomp  DWORD PTR ds:0x1e8c384
 1d4abf1:	df e0                	fnstsw ax
 1d4abf3:	f6 c4 40             	test   ah,0x40
 1d4abf6:	74 02                	je     0x1d4abfa
 1d4abf8:	eb 6c                	jmp    0x1d4ac66
 1d4abfa:	d9 05 f4 c7 7f 02    	fld    DWORD PTR ds:0x27fc7f4
 1d4ac00:	d8 1d 84 c3 e8 01    	fcomp  DWORD PTR ds:0x1e8c384
 1d4ac06:	df e0                	fnstsw ax
 1d4ac08:	f6 c4 40             	test   ah,0x40
 1d4ac0b:	75 0b                	jne    0x1d4ac18
 1d4ac0d:	83 3d 80 f2 dc 02 05 	cmp    DWORD PTR ds:0x2dcf280,0x5
 1d4ac14:	75 02                	jne    0x1d4ac18
 1d4ac16:	eb 4e                	jmp    0x1d4ac66
 1d4ac18:	8d 45 0c             	lea    eax,[ebp+0xc]
 1d4ac1b:	89 85 fc ef ff ff    	mov    DWORD PTR [ebp-0x1004],eax
 1d4ac21:	8b 8d fc ef ff ff    	mov    ecx,DWORD PTR [ebp-0x1004]
 1d4ac27:	51                   	push   ecx
 1d4ac28:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d4ac2b:	52                   	push   edx
 1d4ac2c:	68 00 10 00 00       	push   0x1000
 1d4ac31:	8d 85 00 f0 ff ff    	lea    eax,[ebp-0x1000]
 1d4ac37:	50                   	push   eax
 1d4ac38:	e8 71 79 12 00       	call   0x1e725ae
 1d4ac3d:	83 c4 10             	add    esp,0x10
 1d4ac40:	c7 85 fc ef ff ff 00 	mov    DWORD PTR [ebp-0x1004],0x0
 1d4ac47:	00 00 00 
 1d4ac4a:	8d 8d 00 f0 ff ff    	lea    ecx,[ebp-0x1000]
 1d4ac50:	51                   	push   ecx
 1d4ac51:	ff 15 ac b2 e8 01    	call   DWORD PTR ds:0x1e8b2ac
 1d4ac57:	8d 95 00 f0 ff ff    	lea    edx,[ebp-0x1000]
 1d4ac5d:	52                   	push   edx
 1d4ac5e:	e8 c8 4d fc ff       	call   0x1d0fa2b
 1d4ac63:	83 c4 04             	add    esp,0x4
 1d4ac66:	8b e5                	mov    esp,ebp
 1d4ac68:	5d                   	pop    ebp
 1d4ac69:	c3                   	ret
