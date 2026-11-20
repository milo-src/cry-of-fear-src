
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e3760 <.text+0xe2760>:
100e3760:	b9 cc e8 1a 10       	mov    ecx,0x101ae8cc
100e3765:	8a 11                	mov    dl,BYTE PTR [ecx]
100e3767:	3a 10                	cmp    dl,BYTE PTR [eax]
100e3769:	75 1a                	jne    0x100e3785
100e376b:	84 d2                	test   dl,dl
100e376d:	74 12                	je     0x100e3781
100e376f:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e3772:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e3775:	75 0e                	jne    0x100e3785
100e3777:	83 c1 02             	add    ecx,0x2
100e377a:	83 c0 02             	add    eax,0x2
100e377d:	84 d2                	test   dl,dl
100e377f:	75 e4                	jne    0x100e3765
100e3781:	33 c0                	xor    eax,eax
100e3783:	eb 05                	jmp    0x100e378a
100e3785:	1b c0                	sbb    eax,eax
100e3787:	83 c8 01             	or     eax,0x1
100e378a:	85 c0                	test   eax,eax
100e378c:	75 3e                	jne    0x100e37cc
100e378e:	6a 64                	push   0x64
100e3790:	50                   	push   eax
100e3791:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e3794:	83 ec 08             	sub    esp,0x8
100e3797:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e379e:	3f 
100e379f:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e37a6:	68 98 95 1a 10       	push   0x101a9598
100e37ab:	6a 03                	push   0x3
100e37ad:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e37b3:	e8 38 92 01 00       	call   0x100fc9f0
100e37b8:	83 c4 1c             	add    esp,0x1c
100e37bb:	8b ce                	mov    ecx,esi
100e37bd:	53                   	push   ebx
100e37be:	e8 cd a8 ff ff       	call   0x100de090
100e37c3:	5f                   	pop    edi
100e37c4:	5b                   	pop    ebx
100e37c5:	5e                   	pop    esi
100e37c6:	8b e5                	mov    esp,ebp
100e37c8:	5d                   	pop    ebp
100e37c9:	c2 04 00             	ret    0x4
