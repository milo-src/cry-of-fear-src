
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f1940 <.text+0xf0940>:
100f1940:	55                   	push   ebp
100f1941:	8b ec                	mov    ebp,esp
100f1943:	56                   	push   esi
100f1944:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100f1947:	8b f1                	mov    esi,ecx
100f1949:	e8 72 05 fd ff       	call   0x100c1ec0
100f194e:	85 c0                	test   eax,eax
100f1950:	75 05                	jne    0x100f1957
100f1952:	5e                   	pop    esi
100f1953:	5d                   	pop    ebp
100f1954:	c2 04 00             	ret    0x4
100f1957:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100f195a:	68 cf 00 00 00       	push   0xcf
100f195f:	68 e8 7f 21 10       	push   0x10217fe8
100f1964:	56                   	push   esi
100f1965:	68 e4 b5 1d 10       	push   0x101db5e4
100f196a:	68 ec b5 1d 10       	push   0x101db5ec
100f196f:	e8 4c 94 02 00       	call   0x1011adc0
100f1974:	c7 86 c8 04 00 00 00 	mov    DWORD PTR [esi+0x4c8],0x0
100f197b:	00 00 00 
100f197e:	5e                   	pop    esi
100f197f:	5d                   	pop    ebp
100f1980:	c2 04 00             	ret    0x4
