
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10018000 <.text+0x17000>:
10018000:	55                   	push   ebp
10018001:	8b ec                	mov    ebp,esp
10018003:	56                   	push   esi
10018004:	8b f1                	mov    esi,ecx
10018006:	57                   	push   edi
10018007:	8b 06                	mov    eax,DWORD PTR [esi]
10018009:	ff 50 14             	call   DWORD PTR [eax+0x14]
1001800c:	ff 76 04             	push   DWORD PTR [esi+0x4]
1001800f:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10018012:	8b cf                	mov    ecx,edi
10018014:	68 28 61 1a 10       	push   0x101a6128
10018019:	e8 52 2d 10 00       	call   0x1011ad70
1001801e:	85 c0                	test   eax,eax
10018020:	74 45                	je     0x10018067
10018022:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10018025:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001802a:	6a 16                	push   0x16
1001802c:	68 60 17 21 10       	push   0x10211760
10018031:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
10018037:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001803d:	56                   	push   esi
1001803e:	68 98 61 1a 10       	push   0x101a6198
10018043:	85 d2                	test   edx,edx
10018045:	74 10                	je     0x10018057
10018047:	03 c2                	add    eax,edx
10018049:	8b cf                	mov    ecx,edi
1001804b:	50                   	push   eax
1001804c:	e8 6f 2d 10 00       	call   0x1011adc0
10018051:	5f                   	pop    edi
10018052:	5e                   	pop    esi
10018053:	5d                   	pop    ebp
10018054:	c2 04 00             	ret    0x4
10018057:	03 01                	add    eax,DWORD PTR [ecx]
10018059:	8b cf                	mov    ecx,edi
1001805b:	50                   	push   eax
1001805c:	e8 5f 2d 10 00       	call   0x1011adc0
10018061:	5f                   	pop    edi
10018062:	5e                   	pop    esi
10018063:	5d                   	pop    ebp
10018064:	c2 04 00             	ret    0x4
10018067:	5f                   	pop    edi
10018068:	33 c0                	xor    eax,eax
1001806a:	5e                   	pop    esi
1001806b:	5d                   	pop    ebp
1001806c:	c2 04 00             	ret    0x4
