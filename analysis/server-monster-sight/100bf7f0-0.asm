
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bf7f0 <.text+0xbe7f0>:
100bf7f0:	55                   	push   ebp
100bf7f1:	8b ec                	mov    ebp,esp
100bf7f3:	56                   	push   esi
100bf7f4:	8b f1                	mov    esi,ecx
100bf7f6:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100bf7f9:	57                   	push   edi
100bf7fa:	8b 01                	mov    eax,DWORD PTR [ecx]
100bf7fc:	ff 50 50             	call   DWORD PTR [eax+0x50]
100bf7ff:	8b f8                	mov    edi,eax
100bf801:	83 ff 02             	cmp    edi,0x2
100bf804:	75 30                	jne    0x100bf836
100bf806:	8b 8e 54 03 00 00    	mov    ecx,DWORD PTR [esi+0x354]
100bf80c:	85 c9                	test   ecx,ecx
100bf80e:	74 26                	je     0x100bf836
100bf810:	83 f9 01             	cmp    ecx,0x1
100bf813:	74 19                	je     0x100bf82e
100bf815:	83 f9 04             	cmp    ecx,0x4
100bf818:	74 09                	je     0x100bf823
100bf81a:	f6 86 ec 02 00 00 01 	test   BYTE PTR [esi+0x2ec],0x1
100bf821:	74 0b                	je     0x100bf82e
100bf823:	5f                   	pop    edi
100bf824:	b8 02 00 00 00       	mov    eax,0x2
100bf829:	5e                   	pop    esi
100bf82a:	5d                   	pop    ebp
100bf82b:	c2 04 00             	ret    0x4
100bf82e:	5f                   	pop    edi
100bf82f:	33 c0                	xor    eax,eax
100bf831:	5e                   	pop    esi
100bf832:	5d                   	pop    ebp
100bf833:	c2 04 00             	ret    0x4
100bf836:	8b 06                	mov    eax,DWORD PTR [esi]
100bf838:	8b ce                	mov    ecx,esi
100bf83a:	ff 50 50             	call   DWORD PTR [eax+0x50]
100bf83d:	6b c0 13             	imul   eax,eax,0x13
100bf840:	03 c7                	add    eax,edi
100bf842:	5f                   	pop    edi
100bf843:	5e                   	pop    esi
100bf844:	8b 04 85 18 71 21 10 	mov    eax,DWORD PTR [eax*4+0x10217118]
100bf84b:	5d                   	pop    ebp
100bf84c:	c2 04 00             	ret    0x4
