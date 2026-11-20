
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d1a90 <.text+0xd0a90>:
100d1a90:	55                   	push   ebp
100d1a91:	8b ec                	mov    ebp,esp
100d1a93:	56                   	push   esi
100d1a94:	57                   	push   edi
100d1a95:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100d1a98:	8b f1                	mov    esi,ecx
100d1a9a:	57                   	push   edi
100d1a9b:	e8 90 ff ff ff       	call   0x100d1a30
100d1aa0:	85 c0                	test   eax,eax
100d1aa2:	75 06                	jne    0x100d1aaa
100d1aa4:	5f                   	pop    edi
100d1aa5:	5e                   	pop    esi
100d1aa6:	5d                   	pop    ebp
100d1aa7:	c2 04 00             	ret    0x4
100d1aaa:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100d1aad:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100d1ab2:	6a 01                	push   0x1
100d1ab4:	68 ec 7a 21 10       	push   0x10217aec
100d1ab9:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
100d1abf:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100d1ac5:	56                   	push   esi
100d1ac6:	68 64 7b 1d 10       	push   0x101d7b64
100d1acb:	85 d2                	test   edx,edx
100d1acd:	74 10                	je     0x100d1adf
100d1acf:	03 c2                	add    eax,edx
100d1ad1:	8b cf                	mov    ecx,edi
100d1ad3:	50                   	push   eax
100d1ad4:	e8 e7 92 04 00       	call   0x1011adc0
100d1ad9:	5f                   	pop    edi
100d1ada:	5e                   	pop    esi
100d1adb:	5d                   	pop    ebp
100d1adc:	c2 04 00             	ret    0x4
100d1adf:	03 01                	add    eax,DWORD PTR [ecx]
100d1ae1:	8b cf                	mov    ecx,edi
100d1ae3:	50                   	push   eax
100d1ae4:	e8 d7 92 04 00       	call   0x1011adc0
100d1ae9:	5f                   	pop    edi
100d1aea:	5e                   	pop    esi
100d1aeb:	5d                   	pop    ebp
100d1aec:	c2 04 00             	ret    0x4
