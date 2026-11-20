
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008bac0 <.text+0x8aac0>:
1008bac0:	55                   	push   ebp
1008bac1:	8b ec                	mov    ebp,esp
1008bac3:	83 ec 44             	sub    esp,0x44
1008bac6:	56                   	push   esi
1008bac7:	8b f1                	mov    esi,ecx
1008bac9:	51                   	push   ecx
1008baca:	c7 04 24 00 00 20 41 	mov    DWORD PTR [esp],0x41200000
1008bad1:	8b 06                	mov    eax,DWORD PTR [esi]
1008bad3:	c7 46 78 e0 28 10 10 	mov    DWORD PTR [esi+0x78],0x101028e0
1008bada:	ff 50 08             	call   DWORD PTR [eax+0x8]
1008badd:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1008bae0:	ba dc ec 1b 10       	mov    edx,0x101becdc
1008bae5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1008bae8:	8b 08                	mov    ecx,DWORD PTR [eax]
1008baea:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008baef:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1008baf5:	8a 01                	mov    al,BYTE PTR [ecx]
1008baf7:	3a 02                	cmp    al,BYTE PTR [edx]
1008baf9:	75 1a                	jne    0x1008bb15
1008bafb:	84 c0                	test   al,al
1008bafd:	74 12                	je     0x1008bb11
1008baff:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1008bb02:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
1008bb05:	75 0e                	jne    0x1008bb15
1008bb07:	83 c1 02             	add    ecx,0x2
1008bb0a:	83 c2 02             	add    edx,0x2
1008bb0d:	84 c0                	test   al,al
1008bb0f:	75 e4                	jne    0x1008baf5
1008bb11:	33 c0                	xor    eax,eax
1008bb13:	eb 05                	jmp    0x1008bb1a
1008bb15:	1b c0                	sbb    eax,eax
1008bb17:	83 c8 01             	or     eax,0x1
1008bb1a:	85 c0                	test   eax,eax
1008bb1c:	74 16                	je     0x1008bb34
1008bb1e:	8b 06                	mov    eax,DWORD PTR [esi]
1008bb20:	51                   	push   ecx
1008bb21:	8b ce                	mov    ecx,esi
1008bb23:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1008bb2a:	ff 50 08             	call   DWORD PTR [eax+0x8]
1008bb2d:	5e                   	pop    esi
1008bb2e:	8b e5                	mov    esp,ebp
1008bb30:	5d                   	pop    ebp
1008bb31:	c2 04 00             	ret    0x4
1008bb34:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008bb37:	8d 55 bc             	lea    edx,[ebp-0x44]
1008bb3a:	f3 0f 10 0d 28 97 1a 	movss  xmm1,DWORD PTR ds:0x101a9728
1008bb41:	10 
1008bb42:	8d 48 08             	lea    ecx,[eax+0x8]
1008bb45:	52                   	push   edx
1008bb46:	f3 0f 10 58 24       	movss  xmm3,DWORD PTR [eax+0x24]
1008bb4b:	f3 0f 10 50 28       	movss  xmm2,DWORD PTR [eax+0x28]
1008bb50:	f3 0f 10 40 20       	movss  xmm0,DWORD PTR [eax+0x20]
1008bb55:	f3 0f 59 d9          	mulss  xmm3,xmm1
1008bb59:	f3 0f 59 d1          	mulss  xmm2,xmm1
1008bb5d:	f3 0f 58 59 04       	addss  xmm3,DWORD PTR [ecx+0x4]
1008bb62:	f3 0f 59 c1          	mulss  xmm0,xmm1
1008bb66:	f3 0f 58 51 08       	addss  xmm2,DWORD PTR [ecx+0x8]
1008bb6b:	f3 0f 58 01          	addss  xmm0,DWORD PTR [ecx]
1008bb6f:	f3 0f 11 5d f8       	movss  DWORD PTR [ebp-0x8],xmm3
1008bb74:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
1008bb79:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1008bb7e:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1008bb84:	8d 45 f4             	lea    eax,[ebp-0xc]
1008bb87:	6a 01                	push   0x1
1008bb89:	50                   	push   eax
1008bb8a:	51                   	push   ecx
1008bb8b:	e8 70 ec 08 00       	call   0x1011a800
1008bb90:	ff b6 dc 00 00 00    	push   DWORD PTR [esi+0xdc]
1008bb96:	8d 45 bc             	lea    eax,[ebp-0x44]
1008bb99:	50                   	push   eax
1008bb9a:	e8 61 bb 08 00       	call   0x10117700
1008bb9f:	f3 0f 10 5d e0       	movss  xmm3,DWORD PTR [ebp-0x20]
1008bba4:	f3 0f 10 0d d0 13 1a 	movss  xmm1,DWORD PTR ds:0x101a13d0
1008bbab:	10 
1008bbac:	f3 0f 10 55 e4       	movss  xmm2,DWORD PTR [ebp-0x1c]
1008bbb1:	f3 0f 10 45 e8       	movss  xmm0,DWORD PTR [ebp-0x18]
1008bbb6:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008bbb9:	f3 0f 59 d9          	mulss  xmm3,xmm1
1008bbbd:	f3 0f 59 d1          	mulss  xmm2,xmm1
1008bbc1:	f3 0f 59 c1          	mulss  xmm0,xmm1
1008bbc5:	0f 14 da             	unpcklps xmm3,xmm2
1008bbc8:	66 0f d6 59 20       	movq   QWORD PTR [ecx+0x20],xmm3
1008bbcd:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008bbd2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008bbd5:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
1008bbd8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008bbdb:	83 c0 20             	add    eax,0x20
1008bbde:	50                   	push   eax
1008bbdf:	8d 45 f4             	lea    eax,[ebp-0xc]
1008bbe2:	50                   	push   eax
1008bbe3:	e8 e8 ec 08 00       	call   0x1011a8d0
1008bbe8:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008bbeb:	83 c4 24             	add    esp,0x24
1008bbee:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
1008bbf2:	66 0f d6 41 50       	movq   QWORD PTR [ecx+0x50],xmm0
1008bbf7:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1008bbfa:	89 41 58             	mov    DWORD PTR [ecx+0x58],eax
1008bbfd:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008bc00:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
1008bc07:	10 
1008bc08:	66 0f d6 41 20       	movq   QWORD PTR [ecx+0x20],xmm0
1008bc0d:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
1008bc12:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
1008bc15:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008bc18:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
1008bc1f:	10 
1008bc20:	66 0f d6 41 5c       	movq   QWORD PTR [ecx+0x5c],xmm0
1008bc25:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
1008bc2a:	89 41 64             	mov    DWORD PTR [ecx+0x64],eax
1008bc2d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008bc30:	5e                   	pop    esi
1008bc31:	c7 80 08 01 00 00 00 	mov    DWORD PTR [eax+0x108],0x0
1008bc38:	00 00 00 
1008bc3b:	8b e5                	mov    esp,ebp
1008bc3d:	5d                   	pop    ebp
1008bc3e:	c2 04 00             	ret    0x4
