
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100876d0 <.text+0x866d0>:
100876d0:	53                   	push   ebx
100876d1:	56                   	push   esi
100876d2:	57                   	push   edi
100876d3:	8b f9                	mov    edi,ecx
100876d5:	ba f0 0d 1b 10       	mov    edx,0x101b0df0
100876da:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100876dd:	c7 80 70 01 00 00 00 	mov    DWORD PTR [eax+0x170],0x3f800000
100876e4:	00 80 3f 
100876e7:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100876ea:	f3 0f 10 80 b4 01 00 	movss  xmm0,DWORD PTR [eax+0x1b4]
100876f1:	00 
100876f2:	f3 0f 59 05 d8 1d 1a 	mulss  xmm0,DWORD PTR ds:0x101a1dd8
100876f9:	10 
100876fa:	f3 0f 11 80 64 01 00 	movss  DWORD PTR [eax+0x164],xmm0
10087701:	00 
10087702:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10087705:	c7 80 b4 01 00 00 00 	mov    DWORD PTR [eax+0x1b4],0x40a00000
1008770c:	00 a0 40 
1008770f:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
10087712:	8b 1d 88 31 22 10    	mov    ebx,DWORD PTR ds:0x10223188
10087718:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1008771e:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
10087724:	f7 d9                	neg    ecx
10087726:	1b c9                	sbb    ecx,ecx
10087728:	23 c8                	and    ecx,eax
1008772a:	8b 01                	mov    eax,DWORD PTR [ecx]
1008772c:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
10087732:	8a 08                	mov    cl,BYTE PTR [eax]
10087734:	3a 0a                	cmp    cl,BYTE PTR [edx]
10087736:	75 1a                	jne    0x10087752
10087738:	84 c9                	test   cl,cl
1008773a:	74 12                	je     0x1008774e
1008773c:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1008773f:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10087742:	75 0e                	jne    0x10087752
10087744:	83 c0 02             	add    eax,0x2
10087747:	83 c2 02             	add    edx,0x2
1008774a:	84 c9                	test   cl,cl
1008774c:	75 e4                	jne    0x10087732
1008774e:	33 c0                	xor    eax,eax
10087750:	eb 05                	jmp    0x10087757
10087752:	1b c0                	sbb    eax,eax
10087754:	83 c8 01             	or     eax,0x1
10087757:	85 c0                	test   eax,eax
10087759:	74 13                	je     0x1008776e
1008775b:	c7 86 08 01 00 00 06 	mov    DWORD PTR [esi+0x108],0x6
10087762:	00 00 00 
10087765:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
10087768:	8b 1d 88 31 22 10    	mov    ebx,DWORD PTR ds:0x10223188
1008776e:	f3 0f 10 03          	movss  xmm0,DWORD PTR [ebx]
10087772:	f3 0f 58 05 ec 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1eec
10087779:	10 
1008777a:	f3 0f 11 86 b8 01 00 	movss  DWORD PTR [esi+0x1b8],xmm0
10087781:	00 
10087782:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10087785:	5f                   	pop    edi
10087786:	5e                   	pop    esi
10087787:	5b                   	pop    ebx
10087788:	c7 80 08 02 00 00 00 	mov    DWORD PTR [eax+0x208],0x3f800000
1008778f:	00 80 3f 
10087792:	c3                   	ret
