
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101057f0 <.text+0x1047f0>:
101057f0:	55                   	push   ebp
101057f1:	8b ec                	mov    ebp,esp
101057f3:	56                   	push   esi
101057f4:	57                   	push   edi
101057f5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
101057f8:	8b f1                	mov    esi,ecx
101057fa:	57                   	push   edi
101057fb:	e8 c0 c6 fb ff       	call   0x100c1ec0
10105800:	85 c0                	test   eax,eax
10105802:	75 06                	jne    0x1010580a
10105804:	5f                   	pop    edi
10105805:	5e                   	pop    esi
10105806:	5d                   	pop    ebp
10105807:	c2 04 00             	ret    0x4
1010580a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1010580d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10105812:	6a 0b                	push   0xb
10105814:	68 18 9c 21 10       	push   0x10219c18
10105819:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1010581f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10105825:	56                   	push   esi
10105826:	68 38 f9 1d 10       	push   0x101df938
1010582b:	85 d2                	test   edx,edx
1010582d:	74 10                	je     0x1010583f
1010582f:	03 c2                	add    eax,edx
10105831:	8b cf                	mov    ecx,edi
10105833:	50                   	push   eax
10105834:	e8 87 55 01 00       	call   0x1011adc0
10105839:	5f                   	pop    edi
1010583a:	5e                   	pop    esi
1010583b:	5d                   	pop    ebp
1010583c:	c2 04 00             	ret    0x4
1010583f:	03 01                	add    eax,DWORD PTR [ecx]
10105841:	8b cf                	mov    ecx,edi
10105843:	50                   	push   eax
10105844:	e8 77 55 01 00       	call   0x1011adc0
10105849:	5f                   	pop    edi
1010584a:	5e                   	pop    esi
1010584b:	5d                   	pop    ebp
1010584c:	c2 04 00             	ret    0x4
