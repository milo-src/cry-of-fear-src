
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10007470 <.text+0x6470>:
10007470:	55                   	push   ebp
10007471:	8b ec                	mov    ebp,esp
10007473:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10007476:	33 d2                	xor    edx,edx
10007478:	8a 01                	mov    al,BYTE PTR [ecx]
1000747a:	84 c0                	test   al,al
1000747c:	74 0f                	je     0x1000748d
1000747e:	66 90                	xchg   ax,ax
10007480:	3c 3f                	cmp    al,0x3f
10007482:	74 37                	je     0x100074bb
10007484:	8a 44 0a 01          	mov    al,BYTE PTR [edx+ecx*1+0x1]
10007488:	42                   	inc    edx
10007489:	84 c0                	test   al,al
1000748b:	75 f3                	jne    0x10007480
1000748d:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10007492:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10007497:	6a 64                	push   0x64
10007499:	6a 00                	push   0x0
1000749b:	83 ec 08             	sub    esp,0x8
1000749e:	8b 80 b8 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f5b8]
100074a4:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100074ab:	3f 
100074ac:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100074b1:	51                   	push   ecx
100074b2:	6a 04                	push   0x4
100074b4:	ff d0                	call   eax
100074b6:	83 c4 18             	add    esp,0x18
100074b9:	5d                   	pop    ebp
100074ba:	c3                   	ret
100074bb:	56                   	push   esi
100074bc:	be f0 2b 22 10       	mov    esi,0x10222bf0
100074c1:	2b f1                	sub    esi,ecx
100074c3:	8a 01                	mov    al,BYTE PTR [ecx]
100074c5:	8d 49 01             	lea    ecx,[ecx+0x1]
100074c8:	88 44 0e ff          	mov    BYTE PTR [esi+ecx*1-0x1],al
100074cc:	84 c0                	test   al,al
100074ce:	75 f3                	jne    0x100074c3
100074d0:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100074d3:	5e                   	pop    esi
100074d4:	83 f8 03             	cmp    eax,0x3
100074d7:	77 2b                	ja     0x10007504
100074d9:	ff 24 85 40 75 00 10 	jmp    DWORD PTR [eax*4+0x10007540]
100074e0:	c6 82 f0 2b 22 10 31 	mov    BYTE PTR [edx+0x10222bf0],0x31
100074e7:	eb 22                	jmp    0x1000750b
100074e9:	c6 82 f0 2b 22 10 33 	mov    BYTE PTR [edx+0x10222bf0],0x33
100074f0:	eb 19                	jmp    0x1000750b
100074f2:	c6 82 f0 2b 22 10 32 	mov    BYTE PTR [edx+0x10222bf0],0x32
100074f9:	eb 10                	jmp    0x1000750b
100074fb:	c6 82 f0 2b 22 10 34 	mov    BYTE PTR [edx+0x10222bf0],0x34
10007502:	eb 07                	jmp    0x1000750b
10007504:	c6 82 f0 2b 22 10 23 	mov    BYTE PTR [edx+0x10222bf0],0x23
1000750b:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10007510:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10007515:	6a 64                	push   0x64
10007517:	6a 00                	push   0x0
10007519:	83 ec 08             	sub    esp,0x8
1000751c:	8b 80 b8 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f5b8]
10007522:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10007529:	3f 
1000752a:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000752f:	68 f0 2b 22 10       	push   0x10222bf0
10007534:	6a 04                	push   0x4
10007536:	ff d0                	call   eax
10007538:	83 c4 18             	add    esp,0x18
1000753b:	5d                   	pop    ebp
1000753c:	c3                   	ret
