
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10105850 <.text+0x104850>:
10105850:	55                   	push   ebp
10105851:	8b ec                	mov    ebp,esp
10105853:	56                   	push   esi
10105854:	6a 0b                	push   0xb
10105856:	68 e0 9c 21 10       	push   0x10219ce0
1010585b:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1010585e:	8b f1                	mov    esi,ecx
10105860:	e8 1b 75 f8 ff       	call   0x1008cd80
10105865:	85 c0                	test   eax,eax
10105867:	75 0a                	jne    0x10105873
10105869:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1010586c:	8b ce                	mov    ecx,esi
1010586e:	e8 ed 74 f8 ff       	call   0x1008cd60
10105873:	5e                   	pop    esi
10105874:	5d                   	pop    ebp
10105875:	c2 04 00             	ret    0x4
